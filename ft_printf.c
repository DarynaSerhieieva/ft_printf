#include "libftprintf.h"
#include "libft.h"

void	var_len(va_list args, int *leng)
{
}

void	var_type(va_list args, const char fmt, int *leng)
{
	var_len(args, leng);

	if (fmt == 'c')
		ft_printchar((va_arg(args, int)));
	else if (fmt == 's')
		ft_printstr((va_arg(args, char *)));
	else if (fmt == 'p')
	else if (fmt == 'd')
	else if (fmt == 'i')
	else if (fmt == 'u')
	else if (fmt == 'x')
	else if (fmt == 'X')
	else if (fmt == '%')
}

int	ft_printf(const char *fmt, ...)
{
	int		*leng;
	va_list		args;

	leng = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt != "%")
			ft_printchar(*fmt);
		else
			var_type(args, *fmt++, leng);
		leng++;
		*fmt++;
	}
	return (leng);
}
