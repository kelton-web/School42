# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksemedo- <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 09:04:30 by ksemedo-          #+#    #+#              #
#    Updated: 2021/11/18 09:04:36 by ksemedo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset ft_split ft_strtrim ft_bzero ft_memcpy ft_memmove ft_memchr ft_memcmp ft_strlen ft_isascii ft_isalpha ft_isdigit ft_isalnum ft_isprint ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_strlcpy ft_strlcat ft_strnstr ft_atoi ft_calloc ft_strdup ft_itoa ft_substr ft_strmapi ft_striteri ft_strjoin ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

SRCS		= $(addsuffix .c, ${SRC})

OBJS		= ${SRCS:.c=.o}

CC			= gcc
RM			= rm -f
AR			= ar rc
RN			= ranlib

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
