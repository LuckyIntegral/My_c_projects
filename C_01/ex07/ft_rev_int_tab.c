/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:46:54 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 16:53:43 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
	int	t;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		t = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = t;
		i++;
	}
}

// #include <stdio.h>

// int main()
// {
// 	int array[] = {1, 2, 3, 4, 5, 6};
// 	int size = sizeof(array) / sizeof(array[0]);

// 	printf("Original array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	printf("\n");

// 	ft_rev_int_tab(array, size);

// 	printf("Reversed array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	printf("\n");

// 	return 0;
// }
