/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:59:35 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 16:13:09 by vfrants          ###   ########.fr       */
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

int power_of_ten(int power)
{
	int result;
	int i;

	i = 0;
	result = 1;
	while (i < power)
	{
		result *= 10;
		i++;
	}
	return (result);
}

int check_condition(int n, int len)
{
	int i;

	i = 1;
	while (i <= len - 1)
	{
		if ((n / power_of_ten(i - 1)) % 10 <= (n / power_of_ten(i)) % 10)
			return (0);
		i++;
	}
	return 1;
}

void ft_print_combn(int n)
{
	int i;

	i = 0;
	while (i < power_of_ten(n))
	{
		if (check_condition(i, n))
		{
			if (i / power_of_ten(n - 1) == 0 && n != 1)
				write(1, "0", 1);
			print_n(i);
			if (i / power_of_ten(n - 1) != 10 - n)
				write(1, ", ", 2);
		}
		i++;
	}
}

// int	main()
// {
// 	ft_print_combn(7);
// }
