#include "libftprintf.h"
#include "libft.h"

// void	ft_puthex(uintptr_t num, int *leng, int is_upper)
// {
// 	if (num >= 16)
// 		ft_puthex(num / 16, leng, is_upper);
// 	*leng += 1;
// 	if (num % 16 < 10)
// 		ft_putchar(num % 16 + '0');
// 	else
// 	{
// 		if (is_upper)
// 			ft_putchar(num % 16 - 10 + 'A');
// 		else
// 			ft_putchar(num % 16 - 10 + 'a');
// 	}
// }
void	ft_puthex(uintptr_t num, int *leng, int is_upper)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, leng, is_upper);
		ft_puthex(num % 16, leng, is_upper);
	}
	else
	{
		*leng += 1;
		if (num <= 9)
			ft_putchar(num + '0');
		else
		{
			if (is_upper)
				ft_putchar(num - 10 + 'A');
			else
				ft_putchar(num - 10 + 'a');
		}
	}
}
