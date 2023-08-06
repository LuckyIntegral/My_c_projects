/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:47:11 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/05 14:52:12 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d \n", ft_recursive_power(2, 2));
// 	printf("%d \n", ft_recursive_power(2, 3));
// 	printf("%d \n", ft_recursive_power(1, 5));
// 	printf("%d \n", ft_recursive_power(5, 1));
// 	printf("%d \n", ft_recursive_power(0, 0));
// 	printf("%d \n", ft_recursive_power(10, -3));
// 	printf("%d \n", ft_recursive_power(-2, 3));
// }
