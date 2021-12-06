/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:46:58 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/12/06 09:50:32 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PRINFT__
# define __FT_PRINFT__

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "ft_printf_function.c"
# include "ft_printf_utils.h"

int ft_putstr(char *str);
int ft_strlen(char *str);



#endif
