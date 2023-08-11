/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 23:03:50 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/11 23:35:18 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail_header.h"

void	ft_display_header(char *name, int *first)
{
	if (*first)
		*first = 0;
	else
		ft_putstr("\n", STDOUT);
	ft_putstr("==> ", STDOUT);
	ft_putstr(name, STDOUT);
	ft_putstr(" <==\n", STDOUT);
}

int	ft_display_file(char *file, t_size size, t_size offset, int *first)
{
	char	c;
	int port;

	port = open(file, O_RDONLY);
	if (port == - 1)
		return (0);
	while (offset < size)
	{
		read(port, &c, 1);
		offset++;
	}
	ft_display_header(file, first);
	while (read(port, &c, 1))
		write(STDOUT, &c, 1);
	return (close(port));
}
