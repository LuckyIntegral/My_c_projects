/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 00:59:00 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/13 01:26:28 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	ft_is_operator(char *c)
{
	if (!(*c == '-' || *c == '+' || *c == '/' || *c == '%' || *c == '*'))
		return (0);
	return (!*(++c));
}

void	ft_fill_ops(t_op *ops)
{
	ops[0] = &ft_sum;
	ops[1] = &ft_sub;
	ops[2] = &ft_mult;
	ops[3] = &ft_div;
	ops[4] = &ft_mod;
}

int	ft_opnmbr(char c)
{
	if (c == '+')
		return (0);
	else if (c == '-')
		return (1);
	else if (c == '*')
		return (2);
	else if (c == '/')
		return (3);
	return (4); // %
}
