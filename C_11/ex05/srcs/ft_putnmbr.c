/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnmbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 00:13:15 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/13 01:11:39 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	ft_putnmbr(int nb, int port)
{
	char	c;

	if (nb < 0)
	{
		if (nb == -2147483648)
			write(port, "-2147483648", 1);
		else
		{
			write (port, "-", 1);
			ft_putnmbr(nb * -1, port);
		}
		return ;
	}
	if (nb >= 10)
		ft_putnmbr(nb / 10, port);
	c = nb % 10 + '0';
	write(port, &c, 1);
}
