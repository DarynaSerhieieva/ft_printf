NAME		= libftprintf.a
INCLUDE		= includes
LIBFT		= libft
SRC_DIR		= src/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rcs

# Source Files
SRC_FILES	=	ft_printf ft_print_decimal ft_print_num_hex ft_print_pointer ft_print_str ft_puthex  ft_un_decimal
SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			@make -C $(LIBFT)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@$(AR) $(NAME) $(OBJ)
			@echo "ft_printf compiled!"

%.o: %.c
			$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
			@$(RM) $(OBJ)
			@make clean -C $(LIBFT)
			@echo "ft_printf object files cleaned!"

fclean:		clean
			@$(RM) $(NAME)
			@$(RM) $(LIBFT)/libft.a
			@echo "ft_printf and libft executables cleaned!"

re:			fclean all
			@echo "Cleaned and rebuilt everything for ft_printf!"

.PHONY:		all clean fclean re