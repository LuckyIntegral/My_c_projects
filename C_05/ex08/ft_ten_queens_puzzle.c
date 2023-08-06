/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 22:11:28 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/06 23:35:11 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long int ft_decn(int power)
{
	long int res;

	res = 1;
	while (power > 0)
	{
		res *= 10L;
		power--;
	}
	return (res);
}

void ft_put_sol(long q)
{
	int	i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = ((q / ft_decn(9 - i)) % 10L) + '0';
		write(1, &c, 1);
		i++;
	}
}

int ft_is_valid(long q, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		if ((q / ft_decn(9 - i)) % 10L == (q / ft_decn(9 - k)) % 10L)
			return (0);
		if (((q / ft_decn(9 - i)) % 10L) - ((q / ft_decn(9 - k)) % 10L) == (k - i))
			return (0);
		if (((q / ft_decn(9 - k)) % 10L) - ((q / ft_decn(9 - i)) % 10L) == (k - i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_brutforse(long q, int k)
{
	long i;
	int	sol;

	i = 0;
	sol = 0;
	if (k >= 10)
	{
		ft_put_sol(q);
		write(1, "\n", 1);
		return (1);
	}
	else
	{
		while (i < 10L)
		{
			if (ft_is_valid(q + (i * ft_decn(9 - k)), k))
				sol += ft_brutforse(q + (i * ft_decn(9 - k)), k + 1);
			i++;
		}
	}
	return (sol);
}

int ft_ten_queens_puzzle(void)
{
	long queens;

	queens = 0L;
	return (ft_brutforse(queens, 0));
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d", ft_ten_queens_puzzle());
// }
