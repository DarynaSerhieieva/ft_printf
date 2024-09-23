#include "libftprintf.h"
#include "libft.h"

// void	ft_puthex(uintptr_t num, int *leng)
// {
// 	if (num >= 16)
// 	{
// 		ft_puthex(num / 16, leng);
// 		ft_puthex(num % 16, leng);
// 	}
// 	else
// 	{
// 		*leng += 1;
// 		if (num <= 9)
// 			ft_putchar(num + '0');
// 		else
// 			ft_putchar(num - 10 + 'a');
// 	}
// }

void	ft_print_pointer(void *ptr, int *leng)
{
	if (ptr == NULL)
	{
		ft_putstr("(nil)");
		*leng += 5;
	}
	else
	{
		ft_putstr("0x");
		*leng += 2;
		ft_puthex((uintptr_t)ptr, leng, 0);
	}
}
