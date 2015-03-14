"""Converts a CMSIS SVD file into a header 
containing all macros for development"""

"""Crappy noob written python code fo your entertainment"""

from math import pow
import sys
import argparse
import xml.etree.ElementTree as ElementTree

"""Default comment length"""
paramDefCommentLen = 100

"""Row number start for defines values"""
paramDefParamStart = 50

"""Default types"""
paramDefU32Type = "unsigned long"
paramDefU16Type = "unsigned short"
paramDefU8Type = "unsigned char"

"""Generate multiples file flag"""
paramDefGenMultFiles = 0

"""Library for converting XML to dict by Duncan McGreggor"""
class XmlListConfig(list):
    def __init__(self, aList):
        for element in aList:
            if len(element):
                # treat like dict
                if len(element) == 1 or element[0].tag != element[1].tag:
                    self.append(XmlDictConfig(element))
                # treat like list
                elif element[0].tag == element[1].tag:
                    self.append(XmlListConfig(element))
            elif element.text:
                text = element.text.strip()
                if text:
                    self.append(text)


class XmlDictConfig(dict):
    '''
    Example usage:

    >>> tree = ElementTree.parse('your_file.xml')
    >>> root = tree.getroot()
    >>> xmldict = XmlDictConfig(root)

    Or, if you want to use an XML string:

    >>> root = ElementTree.XML(xml_string)
    >>> xmldict = XmlDictConfig(root)

    And then use xmldict for what it is... a dict.
    '''
    def __init__(self, parent_element):
        if parent_element.items():
            self.update(dict(parent_element.items()))
        for element in parent_element:
            if len(element):
                # treat like dict - we assume that if the first two tags
                # in a series are different, then they are all different.
                if len(element) == 1 or element[0].tag != element[1].tag:
                    aDict = XmlDictConfig(element)
                # treat like list - we assume that if the first two tags
                # in a series are the same, then the rest are the same.
                else:
                    # here, we put the list in dictionary; the key is the
                    # tag name the list elements all share in common, and
                    # the value is the list itself 
                    aDict = {element[0].tag: XmlListConfig(element)}
                # if the tag has attributes, add those to the dict
                if element.items():
                    aDict.update(dict(element.items()))
                self.update({element.tag: aDict})
            # this assumes that if you've got an attribute in a tag,
            # you won't be having any text. This may or may not be a 
            # good idea -- time will tell. It works for the way we are
            # currently doing XML configuration files...
            elif element.items():
                self.update({element.tag: dict(element.items())})
            # finally, if there are no child tags and no attributes, extract
            # the text
            else:
                self.update({element.tag: element.text})

def generateType(size, acc):
	"""Generate type"""
	if acc == "read-only":
		qual = " const "
	else:
		qual = " "
	if size <= 8:
		ret = "(volatile%s%s)" % (qual, accparamDefU8Type)
	elif size <= 16:
		ret = "(volatile%s%s)" % (qual, paramDefU16Type)
	else:
		ret = "(volatile%s%s)" % (qual, paramDefU32Type)
	return ret	

def generateMask(size):
	"""Generate bit mask"""
	msk = int(pow(2, size)) - 1
	return "(%su)" % format(msk, "#3x")

def generateDefine(param, val):
	"""Generate define #define PARAM (value)"""
	rem = paramDefParamStart - 8 - len(param)
	ret = "#define %s%s%s\n" % (param, (" " * rem), val)
	return ret
	
def generateInfoHeader(desc):
	"""Generate header with info"""
	desc = desc.replace("\n", " ")
	for i in range(paramDefCommentLen):
		desc = desc.replace("  ", " ") 
	div = (paramDefCommentLen - 4 - len(desc)) / 2
	rem = paramDefCommentLen - (len(desc) + div) - 4
	ret = "/%s/\n" % ("*" * (paramDefCommentLen - 2))
	ret += "/*%s%s%s*/\n" % ((" " * div), desc, (" " * rem))
	ret += "/%s/\n" % ("*" * (paramDefCommentLen - 2))
	return ret

def generateBitMacros(per, reg, bit, desc, size, offset):
	"""Generates defines for bit macros"""
	ret = generateInfoHeader(desc)
	ret += generateDefine("%s_%s_%s_OFFSET" % (per, reg, bit), "(%su)" % offset)
	ret += generateDefine("%s_%s_%s_MASK" % (per, reg, bit), generateMask(size))
	if size > 1:
		for ind in range(size):
			param = "%s_%s_%s_%s" % (per, reg, bit, str(ind))
			if ind == 0:
				val = "(1u << %s_%s_%s_OFFSET)" % (per, reg, bit)
			else:
				val = "(1u << (%s_%s_%s_OFFSET + %su))" % (per, reg, bit, str(ind))
			ret += generateDefine(param, val); 	
	ret += generateDefine("%s_%s_%s" % (per, reg, bit), "(%s_%s_%s_MASK << %s_%s_%s_OFFSET)\n" % (per, reg, bit, per, reg, bit))
	return ret

def generateRegisterMacro(per, reg, desc, size, offset, acc):
	"""Generates defines for register macros"""
	ret = generateInfoHeader(desc)
	ret += generateDefine("%s_%s_OFFSET" % (per, reg), "(%su)" % (format(offset, "#3x")))
	ret += generateDefine("%s_%s_TYPE" % (per, reg), generateType(size, acc))
	ret += generateDefine("%s_%s_ADDRESS" % (per, reg), "(%s_%s_BASE + %s_%s_OFFSET)" % (per, reg, per, reg))
	ret += generateDefine("%s_%s" % (per, reg), "*((%s_%s_TYPE *)%s_%s_ADDRESS)\n" % (per, reg, per, reg))
	return ret

def generatePeripheralMacro(per, desc, addr):
	"""Just write peripheral defines"""
	ret = generateInfoHeader(desc)
	ret += generateDefine("%s_BASE" % per, "(%su)\n" % addr)
	return ret 

def processInputs():
	"""Modifies global parameters according to command line input and returns file name"""
	global paramDefU8Type
	global paramDefU16Type
	global paramDefU32Type
	global paramDefParamStart
	global paramDefCommentLen
	global paramDefGenerateMulti
	global paramDefGenMultFiles
	parser = argparse.ArgumentParser(description="Parse SVD description files into C headers")
	parser.add_argument("file", help="Input SVD file")
	parser.add_argument("-uc", type=str, help="Type of 8 bit, default unsigned char")
	parser.add_argument("-us", type=str, help="Type of 16 bit, default unsigned short")
	parser.add_argument("-ul", type=str, help="Type of 32 bit, default unsigned long")
	parser.add_argument("-l", type=int, help="Length of comment line")
	parser.add_argument("-s", type=int, help="Start of define value")
	parser.add_argument("-m", help="Generate multiple files for each peripheral", action="store_true")
	args = parser.parse_args()
	if args.uc:
		paramDefU8Type = args.uc
	if args.us:
		paramDefU16Type = args.us
	if args.ul:
		paramDefU32Type = args.ul
	if args.l:
		paramDefCommentLen = args.l
	if args.s:
		paramDefParamStart = args.s
	if args.m:	
		paramDefGenMultFiles = 1
	return args.file

def getDescription(root):
	"""Returns resulting header name"""
	return root.findtext("name")

def printInfo(name):
	"""Prints standard doulbe inclusion avoidance macro"""
	ret = "#ifndef _%s_H_\n" % name
	ret += "#define _%s_H_\n\n" % name
	return ret

def printInfoPer(name, per):
	"""Prints standard doulbe inclusion avoidance macro"""
	ret = "#ifndef _%s_%s_H_\n" % (name, per)
	ret += "#define _%s_%s_H_\n\n" % (name, per)
	return ret	

def getPeripheralData(dict, name):
	"""Get dict containing data for name"""
	child = dict.get("peripherals")
	per = child.get("peripheral")
	for i in per:
		if i["name"] == name:
			return i	

def getPeripheral(dict, name):
	"""Get pripheral info"""
	per = dict["peripherals"]["peripheral"]
	for x in per:
		if x["name"] == name:
			return x		

def printBits(dict, file, name, regname):
	"""prints bitfield info"""
	field = dict["fields"]["field"]
	for x in field:
		try:
			reg = x["name"]
			desc = x["description"]
			size = int(x["bitWidth"])
			offs = int(x["bitOffset"])
			file.write(generateBitMacros(name, regname, reg, desc, size, offs))
		except:
			pass
			
def printRegisters(per, file, name):
	"""Prints register info"""
	reg =  per["registers"]["register"]
	for x in reg:
		try:
			regname = x["name"]
			desc = x["description"]
			acc = x["access"]
			size = int(x["size"], 0)
			offs = int(x["addressOffset"] , 0)
			file.write(generateRegisterMacro(name, regname, desc, size, offs, acc))	
			printBits(x, file, name, regname)
		except:
			pass
			
def printPeripheral(dict, namep):
	"""Poorly structured code :) this code deals with writing to file"""
	per = dict["peripherals"]["peripheral"]
	
	if paramDefGenMultFiles == 0:
		file = open("%s.h" % namep, "w")
		file.write(printInfo(namep))	

	for x in per:
		name = x["name"]
	
		if paramDefGenMultFiles == 1:
			file = open("%s_%s.h" % (namep, name), "w")
			file.write(printInfoPer(namep, name))	
			
		base = x["baseAddress"]
		if "derivedFrom" in x:
			per = x["derivedFrom"]
		else:
			per = name
		periph = getPeripheral(dict, per)
		desc = periph["description"]
		file.write(generatePeripheralMacro(name, desc, base))
		printRegisters(periph, file, name)
		
		if paramDefGenMultFiles == 1:	
			file.write("#endif")
			file.close()
	
	if paramDefGenMultFiles == 0:	
		file.write("#endif")	
		
def main():
	inp = processInputs()
	root = ElementTree.parse(inp).getroot()
	name = getDescription(root)
	dict = XmlDictConfig(root)
	printPeripheral(dict, name)
	
if __name__ == "__main__":
	sys.exit(main())	
