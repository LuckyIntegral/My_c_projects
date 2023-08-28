/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:34:43 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/28 17:08:48 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_parse_number(va_list *ap, const char *str, int *i)
{
	size_t res;

	if (str[*i] == '-' || str[*i] == '0' || str[*i] == '.')
		(*i)++;
	res = 0;
	if (str[*i] == '*')
	{
		(*i)++;
		return (va_arg(*ap, int));
	}
	while (ft_isdigit(str[*i]))
	{
		res = res * 10 + (str[*i] - '0');
		(*i)++;
		if (str[*i] == '*')
		{
			(*i)++;
			return (va_arg(*ap, int));
		}
	}
	return (res);
}

int ft_parse_flag(va_list *ap, t_flags *flags, const char *str, int i)
{
	while (str[i] && ft_isspec(str[i]))
	{
		if (ft_istype(str[i]))
			break ;
		else if (str[i] == '*')
			flags->numb = (ft_parse_number(ap, str, &i));
		else if (str[i] == '0')
			flags->zero = ft_parse_number(ap, str, &i);
		else if (ft_isdigit(str[i]))
			flags->numb = ft_parse_number(ap, str, &i);
		else if (str[i] == '.')
			flags->dot = ft_parse_number(ap, str, &i);
		else if (str[i] == '-')
			flags->minus = ft_parse_number(ap, str, &i);
		else
			i++;
	}
	return (i);
}

int ft_put_arg(va_list *ap, t_flags *flags, char type)
{
	int counter;

	counter = 0;
	if (type == '%')
		counter += ft_vac(flags, '%');
	else if (type == 'c')
		counter += ft_vac(flags, va_arg(*ap, int));
	else if (type == 's')
		counter += ft_vas(flags, va_arg(*ap, const char *));
	else if (type == 'p')
		counter += ft_vap(flags, va_arg(*ap, void *));
	else if (type == 'd' || type == 'i')
		counter += ft_vaid(flags, va_arg(*ap, int));
	else if (type == 'u')
		counter += ft_vau(flags, va_arg(*ap, unsigned int));
	else if (type == 'x')
		counter += ft_vax(flags, va_arg(*ap, int));
	else if (type == 'X')
		counter += ft_vaxx(flags, va_arg(*ap, int));
	return (counter);
}

int ft_parse_args(va_list *ap, t_flags *flags, const char *str)
{
	int	counter;
	int i;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			ft_flags_init(flags);
			i = ft_parse_flag(ap, flags, str, ++i);
			counter += ft_put_arg(ap, flags, str[i++]);
		}
		else
			counter += ft_putnchar(str[i++], 1);
	}
	return (counter);
}

int ft_printf(const char *fmt, ...)
{
	t_flags flags;
	va_list ap;
	int counter;

	if (!fmt || *fmt == '\0')
		return (0);
	va_start(ap, fmt);
	counter = ft_parse_args(&ap, &flags, fmt);
	va_end(ap);
	return (counter);
}
