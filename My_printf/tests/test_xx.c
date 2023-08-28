/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:28:03 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/27 23:25:48 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int ft_result, printf_result;

	// Basic cases
	ft_result = ft_printf("Output = |%X|\n", 255);
	printf_result = printf("Output = |%X|\n", 255);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%X|\n", 0xABCDEF);
	printf_result = printf("Output = |%X|\n", 0xABCDEF);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Mix flags combinations
	ft_result = ft_printf("Output = |%-10.6X|\n", 12345);
	printf_result = printf("Output = |%-10.6X|\n", 12345);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%0*.*X|\n", 8, 4, 67890);
	printf_result = printf("Output = |%0*.*X|\n", 8, 4, 67890);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*X|\n", -8, 76543);
	printf_result = printf("Output = |%*X|\n", -8, 76543);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Minimum field width
	ft_result = ft_printf("Output = |%10X|\n", 255);
	printf_result = printf("Output = |%10X|\n", 255);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%15X|\n", 0xABCDEF);
	printf_result = printf("Output = |%15X|\n", 0xABCDEF);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Precision
	ft_result = ft_printf("Output = |%.4X|\n", 12345);
	printf_result = printf("Output = |%.4X|\n", 12345);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.8X|\n", 67890);
	printf_result = printf("Output = |%.8X|\n", 67890);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Mix flags and minimum field width
	ft_result = ft_printf("Output = |%*.*X|\n", 8, 4, 12345);
	printf_result = printf("Output = |%*.*X|\n", 8, 4, 12345);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-*.*X|\n", 10, 6, 67890);
	printf_result = printf("Output = |%-*.*X|\n", 10, 6, 67890);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.*X|\n", 3, 0xABCDEF);
	printf_result = printf("Output = |%.*X|\n", 3, 0xABCDEF);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%10.6X|\n", 54321);
	printf_result = printf("Output = |%10.6X|\n", 54321);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-12.*X|\n", 7, 98765);
	printf_result = printf("Output = |%-12.*X|\n", 7, 98765);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	return 0;
}
