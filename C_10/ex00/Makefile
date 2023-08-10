# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 10:05:32 by vfrants           #+#    #+#              #
#    Updated: 2023/08/10 21:41:50 by vfrants          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= ft_display_file
SRCDIR	= srcs
INCDIR	= includes

SRCS	= ${SRCDIR}/ft_display_file.c ${SRCDIR}/ft_put_error.c main.c
OBJS	= ${SRCS:.c=.o}

%.o:	%.c
		${CC} ${CFLAGS} -c $< -o $@ -I ${INCDIR}

${NAME}	: ${OBJS}
		${CC} ${CFLAGS} -o $@ ${OBJS}

all		: ${NAME}

clean	:
		rm -f ${OBJS}

fclean	: clean
		rm -f ${NAME}

re		: fclean all
