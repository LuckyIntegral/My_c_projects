/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 23:34:07 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/11 00:22:16 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_handle_error(char *file)
{
	if (!errno)
		return ;
	ft_putstr("cat: ", STDERR);
	ft_putstr(file, STDERR);
	ft_putstr(": ", STDERR);
	ft_putstr(strerror(errno), STDERR);
	ft_putstr("\n", STDERR);
}
