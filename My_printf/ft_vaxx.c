/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vaxx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:06:11 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/27 23:30:22 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_hex_upper(int nbr)
{
	char *str;
	char *res;

	str = ft_itoa_hex(nbr);
	res = str;
	if (str)
	{
		while (*str)
		{
			*str = ft_toupper(*str);
			str++;
		}
	}
	return (res);
}

int ft_vaxx(t_flags *flags, int nbr)
{
	char *hex;
	int counter;
	int spaces;
	int offset;

	counter = 0;
	hex = ft_itoa_hex_upper(nbr);
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
