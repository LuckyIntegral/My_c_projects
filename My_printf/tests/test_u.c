/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:28:03 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/29 09:59:28 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int ft_result, printf_result;

	ft_printf("\n--------------- Unsigned int test (u) ---------------\n\n");

	// Basic cases
	ft_result = ft_printf("Output = |%u|\n", 123);
	printf_result = printf("Output = |%u|\n", 123);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%6u|\n", 456);
	printf_result = printf("Output = |%6u|\n", 456);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.5u|\n", 789);
	printf_result = printf("Output = |%.5u|\n", 789);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Mix flags combinations
	ft_result = ft_printf("Output = |%-8.3u|\n", 234);
	printf_result = printf("Output = |%-8.3u|\n", 234);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%06.4u|\n", 567);
	printf_result = printf("Output = |%06.4u|\n", 567);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*.*u|\n", 8, 3, 890);
	printf_result = printf("Output = |%*.*u|\n", 8, 3, 890);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-0*.*u|\n", 10, 2, 123);
	printf_result = printf("Output = |%-0*.*u|\n", 10, 2, 123);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// More flag combinations
	ft_result = ft_printf("Output = |%-10.6u|\n", 12345);
	printf_result = printf("Output = |%-10.6u|\n", 12345);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%06.*u|\n", 4, 6789);
	printf_result = printf("Output = |%06.*u|\n", 4, 6789);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*.*u|\n", 12, 3, 9876);
	printf_result = printf("Output = |%*.*u|\n", 12, 3, 9876);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%0*.*u|\n", 14, 5, 54321);
	printf_result = printf("Output = |%0*.*u|\n", 14, 5, 54321);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*.*u|\n", -8, 3, 2468);  // Invalid width value
	printf_result = printf("Output = |%*.*u|\n", -8, 3, 2468); // Invalid width value
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*.3u|\n", 8, -1357);	// Negative number
	printf_result = printf("Output = |%*.3u|\n", 8, -1357); // Negative number
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%05.*u|\n", 4, 123);  // Width with zero flag and precision
	printf_result = printf("Output = |%05.*u|\n", 4, 123); // Width with zero flag and precision
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	return 0;
}
