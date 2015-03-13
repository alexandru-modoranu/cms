from math import pow

paramDefCommentLen = 80
paramDefParamStart = 40

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
	div = (paramDefCommentLen - 2 - len(desc)) / 2
	rem = paramDefCommentLen - (len(desc) + div) - 2
	ret = "/%s/\n" % ("*" * paramDefCommentLen)
	ret += "/*%s%s%s*/\n" % ((" " * div), desc, (" " * rem))
	ret += "/%s/\n" % ("*" * paramDefCommentLen)
	return ret

def generateBitMacros(per, reg, bit, desc, size, offset):
	"""Generates defines for bit macros"""
	ret = generateInfoHeader(desc)
	ret += generateDefine("%s_%s_%s_OFFSET" % (per, reg, bit), "(%su)" % format(offset, "#3x"))
	ret += generateDefine("%s_%s_%s_MASK" % (per, reg, bit), generateMask(size))
	if size > 1:
		for ind in range(size):
			param = "%s_%s_%s_%s" % (per, reg, bit, str(ind))
			if ind == 0:
				val = "(0x1u << %s_%s_%s_OFFSET)" % (per, reg, bit)
			else:
				val = "(0x1u << (%s_%s_%s_OFFSET + %su))" % (per, reg, bit, str(format(ind, "#3x")))
			ret += generateDefine(param, val); 	
	ret += generateDefine("%s_%s_%s" % (per, reg, bit), "(%s_%s_%s_MASK << %s_%s_%s_OFFSET)" % (per, reg, bit, per, reg, bit))
	return ret
	
if __name__ == "__main__":
	for i in range(32):
		print generateBitMacros("USB", "CNTR", "EP", "Endpoint register", i, i)		


"""
class Usage(Exception):
    def __init__(self, msg):
        self.msg = msg

def main(argv=None):
	if argv is None:
		argv = sys.argv
	try:
		try:
			opts, args = getopt.getopt(argv[1:], "hmf:", ["help", "macro", "file="])
		except getopt.error, msg:
			raise Usage(msg)
		# more code, unchanged
		print args
		print opts
	except Usage, err:
		print >>sys.stderr, err.msg
		print >>sys.stderr, "for help use --help"
		return 2

if __name__ == "__main__":
    sys.exit(main())
"""	
