/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fsize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:24:25 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/11 21:46:51 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail_header.h"

t_size ft_fsize(char *file)
{
	t_size	size;
	char	c;
	int	port;

	size = 0;
	port = open(file, O_RDONLY);
	if (port == -1 || errno)
		return (-1);
	while (read(port, &c, 1))
		size++;
	return (size);
}
