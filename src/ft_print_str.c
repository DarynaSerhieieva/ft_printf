/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:23:26 by dserhiei          #+#    #+#             */
/*   Updated: 2024/10/06 17:41:16 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_print_str(char *str, int *leng)
{
	if (str)
	{
		*leng += ft_strlen(str);
		ft_putstr_fd(str, 1);
	}
	else
	{
		*leng += 6;
		ft_putstr_fd("(null)", 1);
	}
}
