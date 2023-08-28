/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:36:10 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/28 17:43:04 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_nbrlen_hex(int n)
{
	size_t res;

	if (!n)
		return (1);
	if (n < 0)
		return (8);
	res = 0;
	while (n)
	{
		n = n / 16;
		res++;
	}
	return (res);
}

char *ft_itoa_hex(int n)
{
	unsigned long nbr;
	char *res;
	int len;

	len = ft_nbrlen_hex(n);
	res = (char *)malloc(sizeof(char) * len);
	if (res)
	{
		nbr = (unsigned long)IS_((n < 0), 4294967296l + (long)n, n);
		while (len--)
		{
			res[len] = "0123456789abcdef"[nbr % 16];
			nbr = nbr / 16;
		}
	}
	return (res);
}

int	ft_xoff(int strlen, int zero, int dot)
{
	int res;

	res = 0;
	if (dot)
		res = dot - strlen;
	else
		res = zero - strlen;
	if (res <= 0)
		return (0);
	return (res);
}

int ft_vax(t_flags *flags, int nbr)
{
	char *hex;
	int counter;
	int spaces;
	int offset;

	counter = 0;
	hex = ft_itoa_hex(nbr);
	if (hex)
	{
		offset = ft_xoff(ft_strlen(hex), flags->zero, flags->dot);
		spaces = ft_get_spaces(flags, ft_strlen(hex) + offset);
		if (spaces > 0)
			counter += ft_putnchar(' ', spaces);
		counter += ft_putnchar('0', offset);
		counter += write(1, hex, ft_strlen(hex));
		if (spaces < 0)
			counter += ft_putnchar(' ', ABS(spaces));
	}
	free(hex);
	return (counter);
}
