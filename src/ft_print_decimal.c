/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:22:55 by dserhiei          #+#    #+#             */
/*   Updated: 2024/09/24 15:22:59 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_print_decimal(int dec, int *leng)
{
	char	*str;

	str = ft_itoa(dec);
	*leng += ft_strlen(str);
	ft_putstr(str);
	free(str);
}
