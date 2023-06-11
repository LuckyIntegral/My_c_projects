/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:30:05 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 16:32:50 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int	t;

	t = *b;
	*b = *a;
	*a = t;
}

// #include <stdio.h>

// int main()
// {
// 	int num1 = 5;
// 	int num2 = 10;

// 	printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

// 	ft_swap(&num1, &num2);

// 	printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

// 	return 0;
// }
