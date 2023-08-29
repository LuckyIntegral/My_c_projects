/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:38:30 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/29 09:58:53 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int main()
{
	int ft_result, printf_result;

	ft_printf("\n--------------- Char test (c) ---------------\n\n");

	// No flags
	ft_result = ft_printf("Output = |%c|\n", 'A');
	printf_result = printf("Output = |%c|\n", 'A');
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Left-justify
	ft_result = ft_printf("Output = |%-5c|\n", 'B');
	printf_result = printf("Output = |%-5c|\n", 'B');
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Zero-padding
	ft_result = ft_printf("Output = |%05c|\n", 'C');
	printf_result = printf("Output = |%05c|\n", 'C');
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Precision
	ft_result = ft_printf("Output = |%.3c|\n", 'D');
	printf_result = printf("Output = |%.3c|\n", 'D');
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Left-justify with precision
	ft_result = ft_printf("Output = |%-6.2c|\n", 'E');
	printf_result = printf("Output = |%-6.2c|\n", 'E');
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Zero-padding with precision
	ft_result = ft_printf("Output = |%06.4c|\n", 'F');
	printf_result = printf("Output = |%06.4c|\n", 'F');
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Left-justify, zero-padding, precision
	ft_result = ft_printf("Output = |%-07.3c|\n", 'G');
	printf_result = printf("Output = |%-07.3c|\n", 'G');
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Wrong cases
	ft_result = ft_printf("Output = |%c|\n", 65);  // Using integer instead of char
	printf_result = printf("Output = |%c|\n", 65); // Using integer instead of char
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%c|\n");  // Missing argument
	printf_result = printf("Output = |%c|\n"); // Missing argument
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%c|\n", 'D');
	printf_result = printf("Output = |%c|\n", 'D');
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	return 0;
}
