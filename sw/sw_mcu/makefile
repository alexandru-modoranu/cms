# Project name
PROJ_NAME = cms_sw

# Source files to add to the build
C_FILES = main.c

# Assembly files to add to the buid
ASM_FILES = startup.s

# Project folders
INC_PATH = inc
SRC_PATH = src
OBJ_PATH = obj
OUT_PATH = out
RES_PATH = res

# Placeholders for executables
CC = arm-none-eabi-gcc
LD = arm-none-eabi-gcc
AS = arm-none-eabi-as
OD = arm-none-eabi-objdump
CP = arm-none-eabi-objcopy
 
# Build flags
CC_FLAGS = -I./$(INC_PATH)/ -Wall -Wextra -Wno-main -std=gnu99 -pedantic -O3 -c -g \
							-mcpu=cortex-m4 -mfloat-abi=hard \
							-mfpu=fpv4-sp-d16 -mthumb -mabi=aapcs \
							-fsingle-precision-constant -fno-builtin
LD_FLAGS = -T./$(RES_PATH)/script.ld -mcpu=cortex-m4 -mfloat-abi=hard \
							-mfpu=fpv4-sp-d16 -mthumb -march=armv7e-m -nostartfiles	\
							-nostdlib
AS_FLAGS = -mcpu=cortex-m4 -mfloat-abi=hard \
							-mfpu=fpv4-sp-d16 -mthumb -march=armv7e-m	
OD_FLAGS = -S
CP_FLAGS = -Obinary 
				 
# Make a list with all required objects
C_OBJ_LIST = $(C_FILES:.c=.o)
ASM_OBJ_LIST = $(ASM_FILES:.s=.o)

# Add paths to objects
C_OBJ = $(patsubst %, $(OBJ_PATH)/%, $(C_OBJ_LIST))
ASM_OBJ = $(patsubst %, $(OBJ_PATH)/%, $(ASM_OBJ_LIST))

# Generic make all o's from c files
$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@echo -n Compiling $<...
	@$(CC) $(CC_FLAGS) $< -o $@
	@echo [Done]

# Generic make all o's from asm files
$(OBJ_PATH)/%.o: $(SRC_PATH)/%.s
	@echo -n Assembling $<...
	@$(AS) $(AS_FLAGS) -o $@ $<	
	@echo [Done]

# Do all operations including flashing
all: build

# Do only a rebuild
build: clean rebuild

# Build obj files and link
rebuild: make_c make_asm link disasm make_bin

# Invoke linker
link:
	@echo -n Linking files...
	@$(LD) $(LD_FLAGS) -o $(OUT_PATH)/$(PROJ_NAME).elf $(C_OBJ) $(ASM_OBJ)
	@echo [Done]

# Invoke compiler	
make_c: $(C_OBJ)
		
# Invoke assembler
make_asm: $(ASM_OBJ)

# Generate binary
make_bin:
	@echo -n Making binary...
	@$(CP) $(CP_FLAGS) $(OUT_PATH)/$(PROJ_NAME).elf $(OUT_PATH)/$(PROJ_NAME).bin
	@echo [Done]

# Run disassembler on the elf file
disasm:	
	@echo -n Disassembling source...
	@$(OD) $(OD_FLAGS) $(OUT_PATH)/$(PROJ_NAME).elf > $(OUT_PATH)/$(PROJ_NAME).lst
	@echo [Done]

# Write flash contents to target
flash:
	@echo -n Flashing target...
	@ST-LINK_CLI.exe -c SWD UR -ME -P $(OUT_PATH)/$(PROJ_NAME).bin 0x08000000 -HardRst
	@echo [Done] 	

# Clean existing obj files
clean:
	@echo -n Cleaning existing files...
	@rm -f $(OBJ_PATH)/*
	@rm -f $(OUT_PATH)/*
	@echo [Done]
	