/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:50:17 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/11 22:21:43 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail_header.h"

void	ft_handle_error(char *filename)
{
	if (!errno)
		return ;
	ft_putstr("tail: ", STDERR);
	ft_putstr(filename, STDERR);
	ft_putstr(": ", STDERR);
	ft_putstr(strerror(errno), STDERR);
	ft_putstr("\n", STDERR);
	errno = 0;
}
