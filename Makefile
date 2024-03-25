# ██████╗ ██╗   ██╗███████╗██╗  ██╗        ███████╗██╗    ██╗ █████╗ ██████╗ 
# ██╔══██╗██║   ██║██╔════╝██║  ██║        ██╔════╝██║    ██║██╔══██╗██╔══██╗
# ██████╔╝██║   ██║███████╗███████║        ███████╗██║ █╗ ██║███████║██████╔╝
# ██╔═══╝ ██║   ██║╚════██║██╔══██║        ╚════██║██║███╗██║██╔══██║██╔═══╝ 
# ██║     ╚██████╔╝███████║██║  ██║███████╗███████║╚███╔███╔╝██║  ██║██║     
# ╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     

NAME = push_swap
CHECKER_NAME = checker

SRCS = \
	main utils state stack/push stack/rotate stack/swap stack/create \
	args stack/distance stack/byte stack/index instructions/pa \
	stack/mem instructions/pb instructions/ra instructions/rb instructions/rr \
	stack/min instructions/rra instructions/rrb instructions/rrr instructions/sa \
	instructions/sb instructions/ss stack/sort/radix stack/sort/simple \
	stack/append stack/last stack/size stack/sort/utils
CHECKER_SRCS = \
	checker/main checker/print checker/utils checker/instructions state stack/push \
	stack/rotate stack/swap stack/append stack/sort/utils stack/create utils args \
	stack/mem stack/last stack/size stack/index stack/sort/radix stack/sort/simple \
	stack/min stack/distance stack/byte instructions/pa instructions/pb \
	instructions/ra instructions/rra instructions/sa

SRC_DIR = src
LIB_DIR = lib
INC_DIR = include
OUT_DIR = out
OBJ_DIR = $(OUT_DIR)/obj

OUT = $(OUT_DIR)/$(NAME)
CHECKER_OUT = $(OUT_DIR)/$(CHECKER_NAME)

# Libs
LIBFT_NAME = libft
LIBFT_DIR = lib/ft
LIBFT_OUT = $(LIBFT_DIR)/out/$(LIBFT_NAME).a
LIBFT_INC = $(LIBFT_DIR)/include

CC = cc
CFLAGS = -I$(LIBFT_INC) -I$(INC_DIR)

# Enable test flags when TEST is set to 1
ifeq ($(TEST), 1)
	CFLAGS += -fsanitize=address
endif

# Enable strict by default
ifneq ($(STRICT), 0)
	CFLAGS += -Wall -Wextra -Werror -g3
endif

# Do not print 'entering directory' messages
MAKEFLAGS += --no-print-directory

# Processing
OBJS = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(SRCS)))
CHECKER_OBJS = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(CHECKER_SRCS)))

DIRS = $(sort $(dir $(OBJS)) $(dir $(CHECKER_OBJS)))

# Colors
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

# Targets
all: $(NAME) $(CHECKER_NAME)
	@echo "$<: $(GREEN)compiled all$(RESET)"

$(NAME): $(OBJS) $(LIBFT_NAME)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT_OUT) -o $(OUT)
	@echo "$@: $(GREEN)compiled $@ to $(OUT)$(RESET)"

$(CHECKER_NAME): $(CHECKER_OBJS) $(LIBFT_NAME)
	@$(CC) $(CFLAGS) $(CHECKER_OBJS) $(LIBFT_OUT) -o $(CHECKER_OUT)
	@echo "$@: $(GREEN)compiled $@ to $(CHECKER_OUT)/$@$(RESET)"

$(LIBFT_NAME):
	@$(MAKE) -C $(LIBFT_DIR)
	@echo "$(NAME): $(GREEN)compiled $@$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(DIRS)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(NAME): $(GREEN)compiled $< to $@$(RESET)"

$(DIRS):
	@mkdir -p $@
	@echo "$(NAME): $(GREEN)created directory $@$(RESET)"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(NAME): $(GREEN)$(OBJ_DIR) has been cleaned up$(RESET)"
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean:
	@rm -rf $(OUT_DIR)
	@echo "$(NAME): $(GREEN)$(OUT_DIR) directory has been cleaned up$(RESET)"
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all