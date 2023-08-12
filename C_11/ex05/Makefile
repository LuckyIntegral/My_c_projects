# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/12 23:40:23 by vfrants           #+#    #+#              #
#    Updated: 2023/08/13 01:43:44 by vfrants          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= do-op
SRCDIR	= srcs
INCDIR	= includes

SRCS	= \
		${SRCDIR}/ft_putnmbr.c ${SRCDIR}/ft_atoi.c \
		${SRCDIR}/ft_operations.c ${SRCDIR}/ft_operators.c main.c
OBJS	= ${SRCS:.c=.o}

%.o		: %.c
	@${CC} ${CFLAGS} -c $< -o $@ -I ${INCDIR}

${NAME}	: ${OBJS}
	@${CC} ${CFLAGS} -o $@ ${OBJS}

all		: ${NAME}

clean	:
	@rm -f ${OBJS}

fclean	: clean
	@rm -f ${NAME}

re		: fclean all
