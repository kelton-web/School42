/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:46:58 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/12/23 12:15:27 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PRINTF__
# define __FT_PRINTF__

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int ft_putstr(char *str);
int ft_strlen(char *str);
int ft_putchar(int c);
int ft_format_find(va_list args, char tab);
int ft_printf(const char *tab, ...);
int	ft_putnbr(int nb);
int ft_put_ptr(unsigned long long ptr);
void ft_ptr(uintptr_t nbr);
int ft_lenght_ptr(uintptr_t nbr);

#endif
