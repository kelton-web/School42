/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:00:49 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/11/18 10:34:39 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	while (s[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	while (i >= 0)
	{
		dest[i] = s[i];
		i--;
	}
	return (dest);
}
