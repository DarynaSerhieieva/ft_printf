#include "libftprintf.h"
#include "libft.h"

void	var_type(va_list args, const char fmt, int *leng)
{
	if (fmt == 'c')
	{
		ft_putchar(va_arg(args, int));
		(*leng)++;
	}
	else if (fmt == 's')
		print_str(va_arg(args, char *), leng);
	else if (fmt == 'p')
	{}
	// else if (fmt == 'd')
	// else if (fmt == 'i')
	// else if (fmt == 'u')
	// else if (fmt == 'x')
	// else if (fmt == 'X')
	// else if (fmt == '%')
}

int	ft_printf(const char *fmt, ...)
{
	va_list		args;
	int			leng;

	leng = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt != '%')
		{
			ft_putchar(*fmt);
			leng++;
		}
		else
		{
			fmt++;
			var_type(args, *fmt, &leng);
		}
		fmt++;
	}
	va_end(args);
	return (leng);
}
