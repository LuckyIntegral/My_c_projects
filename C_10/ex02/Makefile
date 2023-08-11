# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 13:17:01 by vfrants           #+#    #+#              #
#    Updated: 2023/08/11 23:13:52 by vfrants          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= ft_tail
SRCDIR	= srcs
INCDIR	= includes

SRCS	= \
		${SRCDIR}/ft_illegal_offset.c ${SRCDIR}/ft_parse_input.c \
		${SRCDIR}/ft_putstr.c ${SRCDIR}/ft_no_arg_option.c \
		${SRCDIR}/ft_empty_option.c ${SRCDIR}/ft_fsize.c \
		${SRCDIR}/ft_handle_error.c  ${SRCDIR}/ft_display_file.c main.c

OBJS	= ${SRCS:.c=.o}

%.o		: %.c
		${CC} ${CFLAGS} -c $< -o $@ -I ${INCDIR}

${NAME}	: ${OBJS}
		${CC} ${CFLAGS} -o $@ ${OBJS}

all		: ${NAME}

clean	:
		rm -f ${OBJS}

fclean	: clean
		rm -f ${NAME}

re		: fclean all
