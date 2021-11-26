/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:04:57 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/11/25 11:54:17 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *element;

    element = (t_list *)malloc(sizeof(t_list));
    if (element == NULL)
        return (NULL);
    element->content = content;
    element->next = 0;
}