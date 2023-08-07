/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:43:50 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/07 10:04:46 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	size;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (-1);
	while (size--)
		arr[size] = min + size;
	*range = arr;
	return (max - min);
}

// #include <stdio.h>

// int	main()
// {
// 	int inc_num = 10;
// 	int *range_inc = &inc_num;
// 	int **range = &range_inc;
// 	int size = ft_ultimate_range(range, 4, 13);
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%i, ", range_inc[i]);
// 	}
// }
