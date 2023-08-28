/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:42:41 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/28 18:22:23 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_nbrlen_ptr(unsigned long int n)
{
	size_t res;

	if (!n)
		return (1);
	res = 0;
	while (n)
	{
		n = n / 16;
		res++;
	}
	return (res);
}

int ft_poff(size_t len, int zero, int dot)
{
	int res;

	res = 0;
	if (dot)
		res = dot - len - 2;
	else
		res = zero - len - 2;
	if (res <= 0)
		return (0);
	return (res);
}

char *ft_ptox(unsigned long int nbr, int offset)
{
	size_t	len;
	char	*res;

	len = ft_nbrlen_ptr(nbr) + 2 + offset;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res)
	{
		res[len] = '\0';
		while (len--)
		{
			res[len] = "0123456789abcdef"[nbr % 16ul];
			nbr = nbr / 16;
		}
		while (len-- && offset--)
			res[len] = '0';
		res[1] = 'x';
		res[0] = '0';
	}
	return (res);
}

int ft_vap(t_flags *flags, void *n)
{
	unsigned long int value;
	char *hex;
	int counter;
	int spaces;
	int offset;

	counter = 0;
	value = (unsigned long int)n;
	offset = ft_poff(ft_nbrlen_ptr(value), flags->zero, flags->dot);
	hex = ft_ptox(value, offset);
	if (hex)
	{
		spaces = ft_get_spaces(flags, ft_strlen(hex));
		if (spaces > 0)
			counter += ft_putnchar(' ', spaces);
		counter += write(1, hex, ft_strlen(hex));
		if (spaces < 0)
			counter += ft_putnchar(' ', ABS(spaces));
	}
	free(hex);
	return (counter);
}
