# Makefile NAME
NAME = libftprintf.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# Source files
SRC = ft_printf.c
OBJ = $(SRC:.c=.o)

# Header files
HEADER = ft_printf.h

# Libft variables
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_HEADER = $(LIBFT_DIR)/libft.h

# Rules
all: $(LIBFT) $(NAME)

# Compile executable
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ) $(LIBFT)

# Compile object files
%.o: %.c $(HEADER) $(LIBFT_HEADER)
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@

# Clean object files and executable
clean:
	$(RM) $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR) clean

# Clean object files, executable, and any additional generated files
fclean: clean
	$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

# Rebuild the project
re: fclean all

# Phony targets
.PHONY: all clean fclean re
