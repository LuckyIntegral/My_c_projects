/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:28:03 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/28 18:20:04 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	void *ptr = (void *)0x12345678;
	int ft_result, printf_result;

	// Mix flags and minimum field width
	ft_result = ft_printf("Output = |%20p|\n", ptr);
	printf_result = printf("Output = |%20p|\n", ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-15.10p|\n", ptr);
	printf_result = printf("Output = |%-15.10p|\n", ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Other flag combinations
	ft_result = ft_printf("Output = |%010p|\n", ptr);
	printf_result = printf("Output = |%010p|\n", ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.*p|\n", 6, ptr);
	printf_result = printf("Output = |%.*p|\n", 6, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*p|\n", 15, ptr);
	printf_result = printf("Output = |%*p|\n", 15, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%0.*p|\n", 8, ptr);
	printf_result = printf("Output = |%0.*p|\n", 8, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// More flag combinations
	ft_result = ft_printf("Output = |%-20p|\n", ptr);
	printf_result = printf("Output = |%-20p|\n", ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.*p|\n", 3, ptr);
	printf_result = printf("Output = |%.*p|\n", 3, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%0*p|\n", 12, ptr);
	printf_result = printf("Output = |%0*p|\n", 12, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-15.*p|\n", 6, ptr);
	printf_result = printf("Output = |%-15.*p|\n", 6, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%15.*p|\n", 4, ptr);
	printf_result = printf("Output = |%15.*p|\n", 4, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Mix flags and minimum field width
	ft_result = ft_printf("Output = |%20p|\n", ptr);
	printf_result = printf("Output = |%20p|\n", ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-15.10p|\n", ptr);
	printf_result = printf("Output = |%-15.10p|\n", ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Other flag combinations
	ft_result = ft_printf("Output = |%010p|\n", ptr);
	printf_result = printf("Output = |%010p|\n", ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.*p|\n", 6, ptr);
	printf_result = printf("Output = |%.*p|\n", 6, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*p|\n", 15, ptr);
	printf_result = printf("Output = |%*p|\n", 15, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%0.*p|\n", 8, ptr);
	printf_result = printf("Output = |%0.*p|\n", 8, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// More flag combinations
	ft_result = ft_printf("Output = |%-20p|\n", ptr);
	printf_result = printf("Output = |%-20p|\n", ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.*p|\n", 3, ptr);
	printf_result = printf("Output = |%.*p|\n", 3, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%0*p|\n", 12, ptr);
	printf_result = printf("Output = |%0*p|\n", 12, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-15.*p|\n", 6, ptr);
	printf_result = printf("Output = |%-15.*p|\n", 6, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%15.*p|\n", 4, ptr);
	printf_result = printf("Output = |%15.*p|\n", 4, ptr);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Test cases with different numbers
	int num1 = 42;
	int num2 = -123456;
	int num3 = 987654;
	ft_result = ft_printf("Output = |%20p|\n", &num1);
	printf_result = printf("Output = |%20p|\n", &num1);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-15.10p|\n", &num2);
	printf_result = printf("Output = |%-15.10p|\n", &num2);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%010p|\n", &num3);
	printf_result = printf("Output = |%010p|\n", &num3);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.*p|\n", 6, &num1);
	printf_result = printf("Output = |%.*p|\n", 6, &num1);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*p|\n", 15, &num2);
	printf_result = printf("Output = |%*p|\n", 15, &num2);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%0.*p|\n", 8, &num3);
	printf_result = printf("Output = |%0.*p|\n", 8, &num3);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);
	return 0;
}
