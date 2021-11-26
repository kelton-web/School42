/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:46:26 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/11/18 10:35:11 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)src);
	i = 0;
	while (src[i] && i < len)
	{
		j = 0;
		while (src[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)src + i);
		}
		i++;
	}
	return (NULL);
}
