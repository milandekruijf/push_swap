# ██╗     ██╗██████╗ ███████╗████████╗
# ██║     ██║██╔══██╗██╔════╝╚══██╔══╝
# ██║     ██║██████╔╝█████╗     ██║   
# ██║     ██║██╔══██╗██╔══╝     ██║   
# ███████╗██║██████╔╝██║        ██║   
# ╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝   

NAME = libft

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
	printf/print getline strcmp strdupv

SRC_DIR = src
OUT_DIR = out
OBJ_DIR = $(OUT_DIR)/obj
INC_DIR = include

OUT = $(OUT_DIR)/$(NAME).a

CC = cc
CC_FLAGS = -I$(INC_DIR)

# Enable test flags when TEST is set to 1
ifeq ($(TEST), 1)
	CC_FLAGS += -fsanitize=address
endif

# Enable strict by default
ifneq ($(STRICT), 1)
	CC_FLAGS += -Wall -Wextra -Werror
endif

# Do not print 'entering directory' messages
MAKEFLAGS += --no-print-directory

# Processing
OBJ_DIRS = $(sort $(dir $(addprefix $(OBJ_DIR)/, $(SRCS))))
OBJS = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(SRCS)))

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

# Targets
all: $(NAME)
	@echo "$(NAME): $(GREEN)compiled all$(RESET)"

$(NAME): $(OBJS)
	@ar -rcs $(OUT) $(OBJS)
	@echo "$(NAME): $(GREEN)compiled $(NAME) to $(OUT)$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIRS)
	@$(CC) $(CC_FLAGS) -c $< -o $@
	@echo "$(NAME): $(GREEN)compiled $< to $@$(RESET)"

$(OBJ_DIRS):
	@mkdir -p $@
	@echo "$(NAME): $(GREEN)created directory $@$(RESET)"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(NAME): $(GREEN)$(OBJ_DIR) has been cleaned up$(RESET)"

fclean:
	@rm -rf $(OUT_DIR)
	@echo "$(NAME): $(GREEN)$(OUT_DIR) directory has been cleaned up$(RESET)"

re: fclean all