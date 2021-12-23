/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:53:30 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/12/23 12:18:10 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prinft_utils.h"

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
		compteur +=	ft_putchar(va_arg(args, int));
	if (tab == 's')
		compteur +=	ft_putstr(va_arg(args, char *));
	if (tab == 'p')
		compteur +=	ft_put_ptr(va_arg(args, unsigned long long));
	if (tab == 'd' || tab == 'i')
		compteur +=	ft_putnbr(va_arg(args, int));
	if (tab == 'u')
		compteur +=	ft_putchar('u');
	if (tab == 'x' || tab == 'X')
		compteur +=	ft_putchar('x');
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

int main()
{
	char *str = "LOOLdd";
	int adrss = 167;
	unsigned int unbr = 354687524;
	char c = '%';


	printf("==========================\n");
	printf("test avec des char\n");
	printf("==========================\n");

	printf("ft nbr: %d\n",ft_printf("%c\n", c));
	printf("sy nbr: %d\n",printf("%c\n", c));


	printf("==========================\n");
	printf("test avec des string\n");
	printf("==========================\n");

	printf("ft nbr: %d\n",ft_printf("%s\n", str));
	printf("sy nbr: %d\n",printf("%s\n", str));

	printf("==========================\n");
	printf("test avec des Int\n");
	printf("==========================\n");

	printf("ft nbr : %d\n",ft_printf("%d\n", adrss));
	printf("sy nbr: %d\n",printf("%d\n", adrss));

	printf("==========================\n");
	printf("test avec des Unsigned Int\n");
	printf("==========================\n");

	printf("ft nbr: %d\n",ft_printf("%u\n", unbr));
	printf("sy nbr: %d\n",printf("%u\n", unbr));


	printf("==========================\n");
	printf("test avec des Hexadecimal\n");
	printf("==========================\n");

	printf("ft nbr: %d\n",ft_printf("%x\n", adrss));
	printf("sy nbr: %d\n",printf("%x\n", adrss));

	printf("==========================\n");
	printf("test avec des Adresse\n");
	printf("==========================\n");

	printf("ft nbr: %d\n",ft_printf("%p\n", &adrss));
	printf("sy nbr: %d\n",printf("%p\n", &adrss));

}
