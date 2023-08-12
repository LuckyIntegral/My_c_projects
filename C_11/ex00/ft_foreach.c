/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 00:00:06 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/12 00:16:22 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_foreach(int *tab, int length, void (*f)(int))
{
	while (length--)
		f(*tab++);
}

// #include <stdio.h>

// void	func(int i)
// {
// 	printf("%i, ", i);
// }

// int main()
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
// 	ft_foreach(arr, 15, &func);
// 	return 0;
// }
