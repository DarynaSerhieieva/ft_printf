/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:23:12 by dserhiei          #+#    #+#             */
/*   Updated: 2024/09/24 15:23:13 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_print_num_hex(unsigned int num, const char fmt, int *leng)
{
	int	status;

	status = 0;
	if (fmt == 'X')
		status = 1;
	ft_puthex(num, leng, status);
}
