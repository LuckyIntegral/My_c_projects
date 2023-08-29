/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vaid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:50:00 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/29 10:38:25 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_nbrlen(int n)
{
	size_t i;

	i = 0ul;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_offset(int nbr, int offset)
{
	size_t len;
	char *str;

	len = ft_nbrlen(nbr) + offset;
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
	if (len)
		str[--len] = '-';
	return (str);
}

int	ft_get_offset(int nbr, int zeros, int dots)
{
	int res;

	if (dots)
		res = dots - ft_nbrlen(nbr);
	else
		res = zeros - ft_nbrlen(nbr);
	if (nbr < 0)
		res++;
	if (res < 0)
		return (0);
	return (res);
}

int ft_get_spaces(t_flags *flags, size_t strlen)
{
	int res;

	res = 0;
	if (flags->minus)
		res = (flags->minus - strlen) * -1;
	else if (flags->numb)
	{
		if (flags->numb < 0)
		{
			if (flags->dot)
				res = (flags->numb + strlen) ;
			else
				res = flags->numb + strlen;
		}
		else if (flags->numb >= (int)strlen)
			res = flags->numb - strlen;
	}
	else if (flags->zero && flags->dot)
		res = flags->zero - strlen;
	return (res);
}

int ft_vaid(t_flags *flags, int nbr)
{
	char *res;
	int counter;
	int spaces;

	counter = 0;
	res = ft_itoa_offset(nbr, ft_get_offset(nbr, flags->zero, flags->dot));
	spaces = ft_get_spaces(flags, ft_strlen(res));
	if (res)
	{
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
