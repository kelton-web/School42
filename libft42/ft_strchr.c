/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:40:23 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/11/18 10:34:35 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	string;
	int		i;

	string = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == string)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == string)
		return ((char *)s + i);
	return (0);
}
