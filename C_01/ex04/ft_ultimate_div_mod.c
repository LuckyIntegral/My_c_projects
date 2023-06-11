/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:38:35 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 16:41:32 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
	int	d;

	d = *a % *b;
	*a = *a / *b;
	*b = d;
}

// #include <stdio.h>

// int main()
// {
// 	int dividend = 20;
// 	int divisor = 7;

// 	printf("Before: dividend = %d, divisor = %d\n", dividend, divisor);

// 	ft_ultimate_div_mod(&dividend, &divisor);

// 	printf("After: dividend = %d, divisor = %d\n", dividend, divisor);

// 	return 0;
// }
