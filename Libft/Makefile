# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/18 01:12:15 by vfrants           #+#    #+#              #
#    Updated: 2023/08/19 23:44:20 by vfrants          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

SRCS	= \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c

OBJS	= ${SRCS:.c=.o}

%.o		: %.c
		${CC} ${CFLAGS} -c $< -o $@ -I .

${NAME}	: ${OBJS}
		ar -rc $@ ${OBJS}

all		: ${NAME}

clean	:
		rm -f ${OBJS}

fclean	: clean
		rm -f ${NAME}

re		: fclean ${NAME}
