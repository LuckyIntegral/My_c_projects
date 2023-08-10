# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/09 21:34:16 by vfrants           #+#    #+#              #
#    Updated: 2023/08/10 09:04:29 by vfrants          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror
INCDIR	= includes
SRCDIR	= srcs
NAME	= libft.a

SRCS	= \
		${SRCDIR}/ft_putchar.c ${SRCDIR}/ft_putstr.c ${SRCDIR}/ft_strcmp.c \
		${SRCDIR}/ft_strlen.c ${SRCDIR}/ft_swap.c

OBJS	= ${SRCS:.c=.o}

%.o:	%.c
		${CC} ${CFLAGS} -c $< -o $@ -I ${INCDIR}

${NAME}:	${OBJS}
		ar -rc $@ ${OBJS}

all:	${NAME}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re: 	fclean all
