# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 20:10:51 by vfrants           #+#    #+#              #
#    Updated: 2023/08/28 18:24:14 by vfrants          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= #-Wall -Wextra -Werror
NAME	= libftprintf.a

LIBDIR	= ./libft
LIBFT	= ${LIBDIR}/libft.a

SRCS	= ft_vac.c ft_vaid.c ft_vap.c ft_vas.c ft_vau.c ft_vax.c ft_vaxx.c \
		ft_utils.c ft_printf.c

OBJS	= ${SRCS:.c=.o}

%.o		: %.c
		${CC} ${CFLAGS} -o $@ -c $< -I .

${NAME}	: ${LIBFT} ${OBJ_DIR} ${OBJS}
		cp	${LIBFT} ${NAME}
		ar -rcs $@ ${OBJS}

${LIBFT}:
		make -C $(LIBDIR) all

all		: ${NAME}

clean	:
		make -C ${LIBDIR} clean
		rm -f ${OBJS} ${OBJS_B}

fclean	: clean
		make -C ${LIBDIR} fclean
		rm -f ${NAME}

re		: fclean all
