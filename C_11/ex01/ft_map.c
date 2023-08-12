/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 22:29:28 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/12 22:59:12 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	*res;
	int	i;

	res = (int *)malloc(sizeof(int) * length);
	if (!res)
		return (res);
	i = -1;
	while (++i < length)
		res[i] = f(tab[i]);
	return (res);
}

// #include <stdio.h>

// int	increm(int a)
// {
// 	return (a + 3);
// }

// int main()
// {
// 	int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
// 	int *new_arr = ft_map(arr, 8, &increm);

// 	int i = 0;
// 	while (i < 8)
// 		printf("%i, ", new_arr[i++]);
// 	return (0);
// }
