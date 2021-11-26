/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:07:47 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/11/25 11:39:14 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT__H__
# define __LIBFT__H__

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;


t_list *ft_lstnew(void *content);

#endif