/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:23:20 by dserhiei          #+#    #+#             */
/*   Updated: 2024/09/24 15:23:21 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
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
