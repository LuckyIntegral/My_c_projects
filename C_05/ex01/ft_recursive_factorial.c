/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:38:28 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/05 14:41:45 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (!nb)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d \n", ft_recursive_factorial(12));
// 	printf("%d \n", ft_recursive_factorial(3));
// 	printf("%d \n", ft_recursive_factorial(5));
// 	printf("%d \n", ft_recursive_factorial(10));
// 	printf("%d \n", ft_recursive_factorial(-3));
// 	printf("%d \n", ft_recursive_factorial(1));
// 	printf("%d \n", ft_recursive_factorial(0));
// }
