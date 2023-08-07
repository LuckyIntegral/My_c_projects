/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:31:16 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/07 09:42:22 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	*arr;
	int	size;

	size = max - min;
	arr = NULL;
	if (size <= 0)
		return (arr);
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (arr);
	while (size--)
		arr[size] = --max;
	return (arr);
}

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	int *arr = ft_range(22, 28);
// 	for (int i = 0; i < 6; i++)
// 	{
// 		printf("%i, ", arr[i]);
// 	}
// 	return 0;
// }
