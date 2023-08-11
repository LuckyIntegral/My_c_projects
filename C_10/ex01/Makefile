# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 22:29:04 by vfrants           #+#    #+#              #
#    Updated: 2023/08/11 13:15:51 by vfrants          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= ft_cat
SRCDIR	= srcs
INCDIR	= includes

SRCS	= \
		${SRCDIR}/ft_display_file.c ${SRCDIR}/ft_handle_error.c \
		${SRCDIR}/ft_putstr.c ${SRCDIR}/ft_stdin.c main.c
OBJS	= ${SRCS:.c=.o}

%.o		:%.c
		${CC} ${CFLAGS} -c $< -o $@ -I ${INCDIR}

${NAME}	: ${OBJS}
		${CC} ${CFLAGS} -o $@ ${OBJS}

all		: ${NAME}

clean	:
		rm -f ${OBJS}

fclean	: clean
		rm -f ${NAME}

re		: fclean all
