#include "libftprintf.h"
#include "libft.h"

void	print_pointer(unsigned long long addr)
{
	char			buffer[20];
	char			hex_digits[] = "0123456789abcdef";
	int			i;

	i = 18;
	buffer[19] = '\0';

	while (addr > 0 && i >= 2)
	{
		buffer[i] = hex_digits[addr % 16];
		addr /= 16;
		i--;
	}

	while (i >= 2)
	{
		buffer[i] = '0';
		i--;
	}

	buffer[0] = '0';
	buffer[1] = 'x';

	write(STDOUT_FILENO, buffer, 20);
}
