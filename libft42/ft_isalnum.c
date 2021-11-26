/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:05:30 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/11/10 09:12:00 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int character)
{
	if ((character >= 97 && character <= 122)
		|| (character >= 65 && character <= 90)
		|| (character >= '0' && character <= '9'))
		return (1);
	return (0);
}
