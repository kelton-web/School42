/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:24:12 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/11/18 10:33:32 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*tab;
	unsigned int	i;
	unsigned int	result;

	result = nmemb * size;
	tab = malloc(result);
	if (!tab)
		return (NULL);
	i = 0;
	while (result--)
	{
		tab[i] = 0;
		i++;
	}
	return ((void *)tab);
}
