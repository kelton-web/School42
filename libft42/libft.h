/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:04:44 by ksemedo-          #+#    #+#             */
/*   Updated: 2021/11/18 14:00:37 by ksemedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "libft.h"
# include <stdlib.h>
# include <ctype.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_memcpy(void *destination, const void *source, size_t size);
void			*ft_memchr(const void *mblock, int searchar, size_t size);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *s, int c, size_t len);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
char			*ft_strnstr(const char *src, const char *needle, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
int				ft_toupper(int lettre);
int				ft_isalnum(int character);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int str);
int				ft_isprint(int character);
int				ft_isascii(int c);
int				ft_memcmp(const void *arrow1, const void *arrow2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_tolower(int lettre);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(const char *s);
size_t			ft_strlcat(char *dest, const char *src, size_t count);

#endif