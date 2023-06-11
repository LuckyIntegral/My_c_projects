/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:23:08 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 15:36:38 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_n(int n)
{
	char c;

	c = n % 10 + '0';
	n /= 10;
	if (n)
		print_n(n);
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i < 10)
				write(1, "0", 1);
			print_n(i);
			write(1, " ", 1);
			if (j < 10)
				write(1, "0", 1);
			print_n(j);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

int	main()
{
	ft_print_comb2();
}
