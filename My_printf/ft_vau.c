/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vau.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:35:50 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/27 23:43:36 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_nbrulen(unsigned int n)
{
	size_t i;

	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char *ft_itou_offset(unsigned int nbr, int offset)
{
	size_t len;
	char *str;

	len = ft_nbrulen(nbr) + offset;
	str = (char *)malloc(sizeof(char) * (++len));
	if (!str)
		return (str);
	str[--len] = '\0';
	if (!nbr)
		str[--len] = '0';
	while (nbr)
	{
		str[--len] = ABS(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	while (offset--)
		str[--len] = '0';
	return (str);
}

int ft_get_u_offset(unsigned int nbr, int zeros, int dots)
{
	int res;

	if (dots)
		res = dots - ft_nbrulen(nbr);
	else
		res = zeros - ft_nbrulen(nbr);
	if (res < 0)
		return (0);
	return (res);
}

int ft_vau(t_flags *flags, unsigned int nbr)
{
	char *res;
	int counter;
	int spaces;

	counter = 0;
	res = ft_itou_offset(nbr, ft_get_u_offset(nbr, flags->zero, flags->dot));
	if (res)
	{
		spaces = ft_get_spaces(flags, ft_strlen(res));
		if (spaces < 0)
		{
			counter += write(1, res, ft_strlen(res));
			counter += ft_putnchar(' ', ABS(spaces));
		}
		else
		{
			counter += ft_putnchar(' ', spaces);
			counter += write(1, res, ft_strlen(res));
		}
	}
	free(res);
	return (counter);
}
