/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:23:26 by dserhiei          #+#    #+#             */
/*   Updated: 2024/09/24 16:38:28 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_print_str(char *str, int *leng)
{
	if (str)
	{
		*leng += ft_strlen(str);
		ft_putstr(str);
	}
	else
	{
		*leng += 6;
		ft_putstr("(null)");
	}
}
