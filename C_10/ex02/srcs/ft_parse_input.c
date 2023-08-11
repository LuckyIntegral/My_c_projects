/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:45:53 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/11 22:19:00 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail_header.h"

int ft_atoi(char *str)
{
	int number;

	number = 0;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (-3); // illegal offset
		number = number * 10 + *str - '0';
		str++;
	}
	return (number);
}

int	ft_is_option(char *str)
{
	int offset;

	if (str[0] == '-' && str[1] == 'c')
		str += 2;
	else
		return (-1); // not an option
	if (*str)
	{
		offset = ft_atoi(str);
		if (offset == -3)
			return (-4); // offset == -3 (argv[1]) -> offset == -4 (argv[0])
		return (offset); // offset >= 0
	}
	else
		return (-2); // only '-c' is present
}

int	ft_parse_input(t_files *files, char **argv)
{
	int offset_1;

	files->begin = 0;
	offset_1 = ft_is_option(argv[files->begin]);
	if (offset_1 == -2 || offset_1 >= 0)
		files->begin++;
	if (offset_1 == -2)
	{
		if (!argv[files->begin])
			return (-5);
		offset_1 = ft_atoi(argv[files->begin]);
		files->begin++;
	}
	if (offset_1 == -3 || offset_1 == -4)
		return (offset_1); // -3 -> illegal offset in argv[2], -4 -> argv[1]
	files->option = offset_1 + 1; // -1 -> no offset,  0+ -> offset is present
	files->offset = offset_1; // if -1 -> option == false, 0+ -> offset here:)
	return (0);
}
