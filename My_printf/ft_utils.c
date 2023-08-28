/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:02:48 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/28 17:02:56 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_flags_init(t_flags *flags)
{
	flags->dot = 0;
	flags->minus = 0;
	flags->zero = 0;
	flags->numb = 0;
}

int ft_istype(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int ft_isspec(char c)
{
	if (ft_isdigit(c) || c == '-' || c == '*' || c == '.' || ft_istype(c))
		return (1);
	return (0);
}
