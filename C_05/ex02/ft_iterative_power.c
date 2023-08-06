/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:42:04 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/05 14:50:53 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	res = 1;
	while (power--)
		res *= nb;
	return (res);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d \n", ft_iterative_power(2, 2));
// 	printf("%d \n", ft_iterative_power(2, 3));
// 	printf("%d \n", ft_iterative_power(1, 5));
// 	printf("%d \n", ft_iterative_power(5, 1));
// 	printf("%d \n", ft_iterative_power(0, 0));
// 	printf("%d \n", ft_iterative_power(10, -3));
// 	printf("%d \n", ft_iterative_power(-2, 3));
// }
