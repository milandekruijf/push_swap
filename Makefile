# Name of the static library
NAME = ft

# Source directories
SRC_DIR = src

# Source files. No need to attach the exact file location in the
# src directory or add the .c file extension.
SRCS = \
	abs atoi isalnum isalpha isascii isblank iscntrl isdigit isgraph islower \
	isprint isupper tolower toupper isspace memcpy memmove memset calloc bzero \
	lstappend lstprepend lstclear lstdelone lstiter lstlast lstmap lstnew \
	lstsize itoa uitoa strdup strndup strrev digitlen strlen strnew strtrim \
	strchr strsub digittoc isxdigit memchr strrchr strncpy strncmp strncat \
	strjoin strmapi strlwr strupr wrdlen strsplit strstr strnstr strlcpy \
	strlcat strcat strisnum strislwr strisupr strcpy striteri strisprint \
	ptox memcmp uitox putc puti puts printf/init_state printf/parse_c \
	printf/parse_d printf/parse_i printf/parse_p printf/parse_s printf/parse_u \
	printf/parse_x printf/print_all printf/print_c printf/print_d printf/print_i \
	printf/print_match printf/print_nil printf/print_null printf/print_p \
	printf/print_percent printf/print_s printf/print_u printf/print_x \
	printf/print printf/test/test

# Out folder
OUT_DIR = out

# Object directories
OBJ_DIR = $(OUT_DIR)/obj
OBJ_DIRS = $(sort $(dir $(addprefix $(OBJ_DIR)/, $(SRCS))))

# Object files
OBJS = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(SRCS)))

# Export lib in the 'out' folder
OUT = $(OUT_DIR)/lib$(NAME).a

# Compiler settings
CC = cc
CC_FLAGS = -Wall -Wextra -Werror
CC_TEST_FLAGS = -fsanitize=address

# Enable test flags when TEST is set to 1
ifeq ($(TEST), 1)
	CC_FLAGS += $(CC_TEST_FLAGS)
endif

# Create all the executables
all: $(NAME)

# Compile the executable
$(NAME): $(OBJS)
	ar -rcs $(OUT) $(OBJS)

# Compile object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIRS)
	$(CC) $(CC_FLAGS) -c $< -o $@

# Create out directory
$(OBJ_DIRS):
	mkdir -p $@

# Clean up object files
clean:
	rm -rf $(OBJS)

# Clean up executable and object files
fclean: clean
	rm -rf $(OUT)

# Clean up and recompile
re: fclean all