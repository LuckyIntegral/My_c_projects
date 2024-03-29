/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:08:44 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/11 00:23:02 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_display_file(char *file)
{
	char	c;
	int port;

	port = open(file, O_RDONLY);
	if (port == - 1)
		return (0);
	while (read(port, &c, 1))
		write(STDIN, &c, 1);
	return (close(port));
}
