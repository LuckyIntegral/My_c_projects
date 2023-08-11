/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_arg_option.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:01:17 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/11 21:34:01 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail_header.h"

int ft_no_arg_option(void)
{
	ft_putstr("tail: option requires an argument -- c\n", STDERR);
	return (-1);
}
