/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:28:03 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/29 10:41:11 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int ft_result, printf_result;

	ft_printf("\n--------------- Hexa (lower) test (x) ---------------\n\n");

	// Basic cases
	ft_result = ft_printf("Output = |%x|\n", 255);
	printf_result = printf("Output = |%x|\n", 255);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%x|\n", 0xABCDEF);
	printf_result = printf("Output = |%x|\n", 0xABCDEF);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Mix flags combinations
	ft_result = ft_printf("Output = |%-10.6x|\n", 12345);
	printf_result = printf("Output = |%-10.6x|\n", 12345);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%0*.*x|\n", 8, 4, 67890);
	printf_result = printf("Output = |%0*.*x|\n", 8, 4, 67890);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*x|\n", -8, 76543);
	printf_result = printf("Output = |%*x|\n", -8, 76543);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Minimum field width
	ft_result = ft_printf("Output = |%10x|\n", 255);
	printf_result = printf("Output = |%10x|\n", 255);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%15x|\n", 0xABCDEF);
	printf_result = printf("Output = |%15x|\n", 0xABCDEF);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Precision
	ft_result = ft_printf("Output = |%.4x|\n", 12345);
	printf_result = printf("Output = |%.4x|\n", 12345);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.8x|\n", 67890);
	printf_result = printf("Output = |%.8x|\n", 67890);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Mix flags and minimum field width
	ft_result = ft_printf("Output = |%*.*x|\n", 8, 4, 12345);
	printf_result = printf("Output = |%*.*x|\n", 8, 4, 12345);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-*.*x|\n", 10, 6, 67890);
	printf_result = printf("Output = |%-*.*x|\n", 10, 6, 67890);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.*x|\n", 3, 0xABCDEF);
	printf_result = printf("Output = |%.*x|\n", 3, 0xABCDEF);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%10.6x|\n", 54321);
	printf_result = printf("Output = |%10.6x|\n", 54321);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-12.*x|\n", 7, 98765);
	printf_result = printf("Output = |%-12.*x|\n", 7, 98765);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Wrong cases
	ft_result = ft_printf("Output = |%x|\n", -12345);
	printf_result = printf("Output = |%x|\n", -12345);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.5x|\n", -67890);
	printf_result = printf("Output = |%.5x|\n", -67890);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*x|\n", -8, 76543);
	printf_result = printf("Output = |%*x|\n", -8, 76543);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_printf("\n--------------- The end of the test ---------------\n");

	return 0;
}
