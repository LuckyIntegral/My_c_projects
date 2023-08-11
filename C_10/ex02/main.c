/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:24:00 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/11 23:27:53 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail_header.h"

#include <stdio.h>

int	ft_handle_status(int status, char **argv)
{
	if (status == -3)
		return (ft_illegal_offset(*(argv + 1)));
	if (status == -4)
		return (ft_illegal_offset((*argv) + 2));
	if (status == -5)
		return (ft_no_arg_option());
	return (0);
}

int	main(int argc, char **argv)
{
	t_files setup;
	t_size size;
	int status;
	int f;

	if (argc == 1)
		ft_empty_option();
	status = ft_parse_input(&setup, ++argv); // -3, -4, -5, 0 are possible
	if (status)
		return (ft_handle_status(status, argv));
	f = 1;
	while (argv[setup.begin])
	{
		size = ft_fsize(argv[setup.begin]);
		if (!errno)
			ft_display_file(argv[setup.begin], size, (t_size) setup.offset, &f);
		if (errno)
			ft_handle_error(argv[setup.begin]);
		setup.begin++;
	}
	return (0);
}
