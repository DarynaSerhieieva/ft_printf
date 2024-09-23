#include "libftprintf.h"
#include "libft.h"

void	ft_print_decimal(int dec, int *leng)
{
	char	*str;

	str = ft_itoa(dec);
	*leng += ft_strlen(str);
	ft_putstr(str);
	free(str);
}
