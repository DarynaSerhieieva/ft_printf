#include "libftprintf.h"
#include "libft.h"

void	ft_print_str(char *str, int *leng)
{
	if (str)
	{
		*leng += ft_strlen(str);
		ft_putstr(str);
	}
}
