# Name of the static library
NAME = ft

# Source directories
SRC_DIR = src

# Source files. No need to attach the exact file location in the
# src directory or add the .c file extension.
SRC_DIR_FILES = \
	abs atoi isalnum isalpha isascii isblank iscntrl isdigit isgraph islower \
	isprint isupper tolower toupper isspace memcpy memmove memset calloc bzero \
	lstappend lstprepend lstclear lstdelone lstiter lstlast lstmap lstnew \
	lstsize itoa uitoa strdup strndup strrev digitlen strlen strnew strtrim \
	strchr strsub digittoc isxdigit memchr strrchr strncpy strncmp strncat \
	strjoin strmapi strlwr strupr wrdlen strsplit strstr strnstr strlcpy \
	strlcat strcat strisnum strislwr strisupr strcpy striteri strisprint \
	ptox memcmp uitox putc putnbr putstr \

# Out folder
OUT_DIR = out

# Object directories
OUT_DIR_OBJ = $(OUT_DIR)/obj

# Object files
OUT_DIR_OBJ_FILES = $(addprefix $(OUT_DIR_OBJ)/, $(addsuffix .o, $(SRC_DIR_FILES)))

# Export lib in the 'out' folder
OUT_DIR_LIB_FILE = $(OUT_DIR)/lib$(NAME).a

# Compiler settings
CC = cc
CC_FLAGS = -Wall -Wextra -Werror
CC_FLAGS_TEST = -fsanitize=address

# Enable test flags when TEST is set to 1
ifeq ($(TEST), 1)
	CC_FLAGS += $(CC_FLAGS_TEST)
endif

# Create all the executables
all: $(NAME)

# Compile the executable
$(NAME): $(OUT_DIR_OBJ_FILES)
	ar -rcs $(OUT_DIR_LIB_FILE) $(OUT_DIR_OBJ_FILES)

# Compile object files
$(OUT_DIR_OBJ)/%.o: $(SRC_DIR)/%.c | $(OUT_DIR_OBJ)
	$(CC) $(CC_FLAGS) -c $< -o $@

# Create out directory
$(OUT_DIR_OBJ):
	mkdir -p $(OUT_DIR_OBJ)

# Clean up object files
clean:
	rm -rf $(OUT_DIR_OBJ_FILES)

# Clean up executable and object files
fclean: clean
	rm -rf $(OUT_DIR_LIB_FILE)

# Clean up and recompile
re: fclean all