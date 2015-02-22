# Project name
PROJ_NAME = libcms

# Source files to add to the build
C_FILES = libcms.c

# Project folders
INC_PATH = inc
SRC_PATH = src
OBJ_PATH = obj
OUT_PATH = out
RES_PATH = res

# Placeholders for executables
CC = gcc
LD = gcc
 
# Build flags
CC_FLAGS = -I./$(INC_PATH)/ -Wall -Wextra -std=gnu99 -pedantic -O3 -c -g						
LD_FLAGS =
				 
# Make a list with all required objects
C_OBJ_LIST = $(C_FILES:.c=.o)

# Add paths to objects
C_OBJ = $(patsubst %, $(OBJ_PATH)/%, $(C_OBJ_LIST))

# Generic make all o's from c files
$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@echo -n Compiling $<...
	@$(CC) $(CC_FLAGS) $< -o $@ -D ADD_EXPORTS
	@echo [Done]

# Do all operations including flashing
all: build copy_header

# Do only a rebuild
build: clean rebuild

# Build obj files and link
rebuild: make_c link

# Copy header file to output
copy_header:
	@echo -n Copying header file...
	@cp -f $(INC_PATH)/$(PROJ_NAME).h $(OUT_PATH)/
	@echo [Done]

# Invoke linker
link:
	@echo -n Linking files...
	@$(LD) $(LD_FLAGS) -o $(OUT_PATH)/$(PROJ_NAME).dll -s -shared $(C_OBJ) -Wl,--subsystem,windows
	@echo [Done]

# Invoke compiler	
make_c: $(C_OBJ)

# Clean existing obj files
clean:
	@echo -n Cleaning existing files...
	@rm -f $(OBJ_PATH)/*
	@rm -f $(OUT_PATH)/*
	@echo [Done]
	