/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:18:19 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/12 23:33:45 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	while (length--)
		if (f(tab[length], tab[length + 1]) > 0)
			return (0);
	return (1);
}

// #include <stdio.h>

// int	func(int a, int b)
// {
// 	return (a - b);
// }

// int main()
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
// 	printf("%i", ft_is_sort(arr, 8, &func));
// 	return (0);
// }
