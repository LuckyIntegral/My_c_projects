/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:41:05 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/05 13:56:04 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (!nb || nb == 1)
		return (1);
	while (nb)
		res = res * nb--;
	return (res);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d \n", ft_iterative_factorial(12));
// 	printf("%d \n", ft_iterative_factorial(3));
// 	printf("%d \n", ft_iterative_factorial(5));
// 	printf("%d \n", ft_iterative_factorial(10));
// 	printf("%d \n", ft_iterative_factorial(-3));
// 	printf("%d \n", ft_iterative_factorial(1));
// 	printf("%d \n", ft_iterative_factorial(0));
// }
