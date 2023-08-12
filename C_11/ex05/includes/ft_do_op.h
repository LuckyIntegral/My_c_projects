/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:49:24 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/13 01:16:12 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include <unistd.h>

typedef int (*t_op)(int, int);

void	ft_putnmbr(int nb, int port);
void	ft_fill_ops(t_op *ops);
int	ft_is_operator(char *c);
int ft_atoi(char *str);
int	ft_opnmbr(char c);

int	ft_sum(int a, int b);
int	ft_sub(int a, int b);
int	ft_mult(int a, int b);
int	ft_div(int a, int b);
int	ft_mod(int a, int b);

# define STDOUT 1
# define STDERR 2

#endif
