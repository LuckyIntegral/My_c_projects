/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_illegal_offset.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:32:14 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/11 21:33:38 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail_header.h"

int	ft_illegal_offset(char *str)
{
	ft_putstr("tail: illegal offset -- ", STDERR);
	ft_putstr(str, STDERR);
	ft_putstr("\n", STDERR);
	return (-1);
}
