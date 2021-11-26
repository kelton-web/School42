/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:38:12 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/11/18 10:34:02 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mblock, int searchar, size_t size)
{
	unsigned char	*str;

	str = (unsigned char *)mblock;
	while (size--)
		if (*str++ == (unsigned char)searchar)
			return (str - 1);
	return (NULL);
}
