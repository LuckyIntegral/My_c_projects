/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:39:44 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 14:23:49 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	power_of_ten(int power)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (i < power)
	{
		result *= 10;
		i++;
	}
	return (result);
}

int	check_condition(int n, int len)
{
	int	i;

	i = 1;
	while (i <= len - 1)
	{
		if ((n / power_of_ten(i - 1)) % 10 <= (n / power_of_ten(i)) % 10)
			return (0);
		i++;
	}
	return 1;
}

void	print_n(int n)
{
	char	c;

	c = n % 10 + '0';
	n /= 10;
	if (n)
		print_n(n);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	n;

	n = 0;
	while (n < power_of_ten(3))
	{
		if (check_condition(n, 3))
		{
			if (n / power_of_ten(2) == 0)
				write(1, "0", 1);
			print_n(n);
			if (n / power_of_ten(2) != 7)
				write(1, ", ", 2);
		}
		n++;
	}
}

// int main(int argc, char const *argv[])
// {
// 	ft_print_comb();
// 	return 0;
// }
