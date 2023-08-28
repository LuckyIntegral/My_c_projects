/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:52:56 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/27 20:13:11 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnstr(const char *str, int n)
{
	int	counter;

	counter = 0;
	while (n-- && *str)
	{
		counter += write(1, str, 1);
		str++;
	}
	return (counter);
}

int	ft_vas(t_flags *flags, const char *str)
{
	size_t	len;
	int	counter;

	counter = 0;
	len = MIN(IS_(flags->dot, flags->dot, ft_strlen(str)), ft_strlen(str));
	if (flags->minus)
	{
		counter += ft_putnstr(IS_NULL(str, "(null)", str), len);
		counter += ft_putnchar(' ', flags->minus - len);
	}
	else if (flags->numb)
	{
		counter += ft_putnchar(' ', flags->numb - len);
		counter += ft_putnstr(IS_NULL(str, "(null)", str), len);
	}
	else if (flags->zero)
	{
		counter += ft_putnchar('0', flags->numb - len);
		counter += ft_putnstr(IS_NULL(str, "(null)", str), len);
	}
	else
		counter += ft_putnstr(IS_NULL(str, "(null)", str), len);
	return (counter);
}
