/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 08:37:47 by ksemedo-          #+#    #+#             */
/*   Updated: 2022/01/04 08:44:59 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "ft_printf.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa(int n);
size_t	get_digits(int n);
int		ft_putnbr(int nb);
int		ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_num_length(unsigned int num);
char	*ft_uitoa(unsigned int n);
int		ft_print_u(unsigned int n);
int		ft_length_hex(unsigned	int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_print_x(unsigned int num, const char format);
int		ft_putchar(int c);
int		ft_format_find(va_list args, char tab);
int		ft_printf(const char *tab, ...);
int		ft_lenght_ptr(uintptr_t nbr);
void	ft_ptr(uintptr_t nbr);
int		ft_put_ptr(unsigned long long ptr);
int		ft_write_d(int n);

#endif
