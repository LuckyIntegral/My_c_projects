/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:00:26 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/10 21:00:38 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_put_error(int error)
{
	if (!error)
		return ;
	if (error == 1)
		write(2, "File name missing.\n", 19);
	if (error == 2)
		write(2, "Too many arguments.\n", 20);
	if (error == 3)
		write(2, "Cannot read file.\n", 18);
}
