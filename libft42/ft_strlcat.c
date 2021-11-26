/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:14:32 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/11/18 10:34:52 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	if (destsize < i)
	{
		while (src[x])
			x++;
		return (destsize + x);
	}
	while (destsize > 0 && i < destsize - 1 && src[x])
		dest[i++] = src[x++];
	dest[i] = '\0';
	while (src[x++])
		i++;
	return (i);
}
