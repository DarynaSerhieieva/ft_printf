/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:26:12 by dserhiei          #+#    #+#             */
/*   Updated: 2024/09/24 15:26:14 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>

int				ft_printf(const char *fmt, ...);

void			ft_print_str(char *str, int *leng);
void			ft_print_pointer(void *ptr, int *leng);
void			ft_print_decimal(int dec, int *leng);
void			ft_un_decimal(unsigned int num, int *leng);
void			ft_print_num_hex(unsigned int num, const char fmt, int *leng);
void			ft_puthex(uintptr_t num, int *leng, int is_upper);

#endif
