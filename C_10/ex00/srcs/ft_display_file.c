/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:08:44 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/10 21:27:01 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_display_file(char *file)
{
	char	buffer[30];
	int port;
	int	size;

	port = open(file, O_RDONLY);
	if (port == - 1)
		return (3);
	size = 0;
	while ((size = read(port, buffer, 20)))
		write(1, buffer, size);
	return (close(port));
}
