# Variables
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
SRC_DIR = src
INCLUDE_DIR = includes
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Gather all .c files from src/ and subdirectories
SRCS = $(shell find $(SRC_DIR) -name "*.c")
OBJS = $(SRCS:.c=.o)

# Rules
all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@echo "Compiling $(NAME)..."
	$(AR) $(NAME) $(OBJS) $(LIBFT)
	@echo "$(NAME) has been created."

# Compile .o files from .c files
%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Compile libft library
$(LIBFT):
	@echo "Compiling libft..."
	$(MAKE) -C $(LIBFT_DIR)

# Clean object files
clean:
	@echo "Cleaning object files..."
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

# Clean object files and the compiled library
fclean: clean
	@echo "Cleaning all compiled files..."
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

# Recompile everything from scratch
re: fclean all

# Phony targets
.PHONY: all clean fclean re
