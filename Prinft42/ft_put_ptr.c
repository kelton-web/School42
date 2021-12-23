/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:58:45 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/12/23 12:15:34 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prinft_utils.h"

int ft_lenght_ptr(uintptr_t nbr)
{
    int i;

    i = 0
    while(nbr != '\0')
    {
        i++;
        nbr /= 16; 
    }
    return (i);
}
void ft_ptr(uintptr_t nbr)
{
    if (nbr >= 16)
    {
        ft_ptr(nbr / 16);
        ft_ptr(nbr % 16);
    }
    else 
    {
        if (nbr <= 9)
            ft_putchar(nbr + '0');
        else
            ft_putchar((nbr - 10) + 'a');
    }
}
int ft_put_ptr(unsigned long long ptr)
{
    int put_ptr;

    put_ptr = 0;
    put_ptr = write(1, "0x", 2);
    if (ptr == 0)
        put_ptr += write(1, '0', 1);
    else 
    {
        ft_ptr(ptr);
        put_ptr += ft_lenght_ptr(ptr);
    }
    return (put_ptr);
}