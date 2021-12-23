/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:22:50 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/12/21 13:56:53 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prinft_utils.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);	
}

int ft_putstr(char *str)
{
    int i;

    i = ft_strlen(str);
    if (str == NULL)
    {
        write(1, "(null)", 6);
        return (6);
    }
	write(1, str, i);
    return (i);
}

int ft_putnbr(int nb)
{
	long n;
	char count;
	
	count = 0;
	n = nb;
	if (n < 0)
	{
		count += ft_putchar('-');
		count += n += -1;
	}
	if (n == 10)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	else
	{
		count += ft_putchar(n + 48);
	}
	return (count);
}
