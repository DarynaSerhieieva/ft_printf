# Name of the library
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES)

# Include directory
INCLUDES = ../includes

# Source files and object files
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		get_next_line.c
OBJ = $(SRC:.c=.o)

# Main target
all: $(NAME)

# Compile the library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compile object files, using INCLUDES for header files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJ)

# Clean object files and the library
fclean: clean
	rm -f $(NAME)

# Rebuild the library from scratch
re: fclean all

# Phony targets to prevent conflicts
.PHONY: all clean fclean re
