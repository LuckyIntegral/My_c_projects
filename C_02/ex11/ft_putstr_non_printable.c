/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 15:12:59 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/17 15:28:05 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_non_printable(char c)
{
	char	str[16] = "0123456789abcdef";

	write(1, "\\", 1);
	write(1, &str[c / 16], 1);
	write(1, &str[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
		{
			ft_print_non_printable(*str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}

// int	main(int c, char *v[])
// {
// 	int	i;

// 	i = 1;
// 	while (i < c)
// 	{
// 		ft_putstr_non_printable(v[i]);
// 		i++;
// 	}
// 	return (0);
// }
