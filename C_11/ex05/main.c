/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:50:43 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/13 01:36:43 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	ft_check_argcv(int argc, char **argv)
{
	int	op;
	int	numb;

	if (argc != 4)
		return (-1);
	if (!ft_is_operator(argv[2]))
	{
		ft_putnmbr(0, STDERR);
		return (-1);
	}
	op = ft_opnmbr(argv[2][0]);
	numb = ft_atoi(argv[3]);
	if (op == 3 && !numb)
		write(STDERR, "Stop : division by zero\n", 24);
	if (op == 4 && !numb)
		write(STDERR, "Stop : modulo by zero\n", 22);
	if ((op == 3 || op == 4) && !numb)
		return (-1);
	return (0);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	t_op	ops[5];
	int	op;

	if (ft_check_argcv(argc, argv) == -1)
		return (-1);
	ft_fill_ops(ops);
	op = ft_opnmbr(argv[2][0]);
	ft_putnmbr(ops[op](ft_atoi(argv[1]), ft_atoi(argv[3])), STDOUT);
	return (0);
}
