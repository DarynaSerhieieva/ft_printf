#include "libftprintf.h"
#include "libft.h"

void	ft_print_num_hex(unsigned int num, const char fmt, int *leng)
{
	int	status;

	status = 0;
	if (fmt == 'X')
		status = 1;
	ft_puthex(num, leng, status);
}
