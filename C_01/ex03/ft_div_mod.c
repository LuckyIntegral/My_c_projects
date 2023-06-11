/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:33:07 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 16:38:46 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int main()
// {
// 	int dividend = 20;
// 	int divisor = 7;
// 	int quotient, remainder;

// 	ft_div_mod(dividend, divisor, &quotient, &remainder);

// 	printf("Dividend: %d\n", dividend);
// 	printf("Divisor: %d\n", divisor);
// 	printf("Quotient: %d\n", quotient);
// 	printf("Remainder: %d\n", remainder);

// 	return 0;
// }
