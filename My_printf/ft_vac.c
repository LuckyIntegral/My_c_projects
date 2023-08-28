/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vac.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:32:04 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/27 19:27:15 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnchar(char c, int n)
{
	int	counter;

	if (n <= 0)
		return (0);
	counter = 0;
	while (n--)
		counter += write(1, &c, 1);
	return (counter);
}

int	ft_vac(t_flags *flags, const char c)
{
	int	counter;

	counter = 0;
	if (flags->minus)
	{
		counter += ft_putnchar(c, 1);
		counter += ft_putnchar(' ', flags->minus - 1);
	}
	else if (flags->numb)
	{
		counter += ft_putnchar(' ', flags->numb - 1);
		counter += ft_putnchar(c, 1);
	}
	else if (flags->zero)
	{
		counter += ft_putnchar('0', flags->zero - 1);
		counter += ft_putnchar(c, 1);
	}
	else
		counter += ft_putnchar(c, 1);
	return (counter);
}
