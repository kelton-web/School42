/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:03:43 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/11/18 10:35:24 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			count;
	char			*cpy;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
	{
		cpy = malloc(sizeof(char));
		if (!cpy)
			return (NULL);
		cpy[0] = 0;
		return (cpy);
	}
	cpy = malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	i = start;
	count = 0;
	while (s[i] && count < len)
		cpy[count++] = s[i++];
	cpy[count] = '\0';
	return (cpy);
}
