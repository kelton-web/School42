/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 08:49:05 by ksemedo-          #+#    #+#             */
/*   Updated: 2022/01/04 08:49:11 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format_find(va_list args, char tab)
{
	int	compteur;

	compteur = 0;
	if (tab == 'c')
		compteur += ft_putchar(va_arg (args, int));
	if (tab == 's')
		compteur += ft_putstr(va_arg (args, char *));
	if (tab == 'p')
		compteur += ft_put_ptr(va_arg (args, unsigned long long));
	if (tab == 'd' || tab == 'i')
		compteur += ft_write_d(va_arg (args, int));
	if (tab == 'u')
		compteur += ft_print_u(va_arg (args, unsigned int));
	if (tab == 'x' || tab == 'X')
		compteur += ft_print_x(va_arg (args, unsigned int), tab);
	if (tab == '%')
		compteur += ft_putchar('%');
	return (compteur);
}

int	ft_printf(const char *tab, ...)
{
	int		i;
	va_list	args;
	int		compteur;

	va_start(args, tab);
	i = 0;
	compteur = 0;
	while (tab[i])
	{
		if (tab[i] == '%')
		{
			compteur += ft_format_find(args, tab[i + 1]);
			i++;
		}
		else
		{
			compteur += ft_putchar(tab[i]);
		}
		i++;
	}
	va_end(args);
	return (compteur);
}
