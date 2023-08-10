/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:01:05 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/10 21:01:18 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int main(int argc, char *argv[])
{
	int	status;

	status = 0;
	if (argc == 1)
		status = 1;
	if (argc > 2)
		status = 2;
	if (!status)
		status = ft_display_file(argv[1]);
	ft_put_error(status);
	return (status);
}
