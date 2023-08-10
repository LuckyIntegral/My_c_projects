/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:38:00 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/11 00:24:38 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main(int argc, char **argv)
{
	if (argc == 1)
		ft_stdin();
	argv++;
	while (*argv)
	{
		ft_display_file(*argv);
		ft_handle_error(*argv);
		errno = 0;
		argv++;
	}
	return (errno);
}
