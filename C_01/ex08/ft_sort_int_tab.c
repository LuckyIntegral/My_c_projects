/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:54:40 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 17:10:08 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
	int t;
	int	i;

	while (size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				t = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = t;
			}
			i++;
		}
		size--;
	}
}

// #include <stdio.h>

// int main()
// {
// 	int array[] = {10, -4, 0, 9, -8, 5, 2};
// 	int size = sizeof(array) / sizeof(array[0]);

// 	printf("Original array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	printf("\n");

// 	ft_sort_int_tab(array, size);

// 	printf("Sorted array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	printf("\n");

// 	return 0;
// }
