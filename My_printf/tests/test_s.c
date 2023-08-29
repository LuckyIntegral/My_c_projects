/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:38:30 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/29 10:41:00 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int ft_result, printf_result;

	ft_printf("\n--------------- String test (s) ---------------\n\n");

	// Correct cases
	ft_result = ft_printf("Output = |%s|\n", "Hello");
	printf_result = printf("Output = |%s|\n", "Hello");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-10s|\n", "World");
	printf_result = printf("Output = |%-10s|\n", "World");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%s|\n", "Welcome");
	printf_result = printf("Output = |%s|\n", "Welcome");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Various combinations of flags and minimum field width
	ft_result = ft_printf("Output = |%10s|\n", "Text");
	printf_result = printf("Output = |%10s|\n", "Text");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-10.5s|\n", "ShortText");
	printf_result = printf("Output = |%-10.5s|\n", "ShortText");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-10.*s|\n", 6, "DynamicWidth");
	printf_result = printf("Output = |%-10.*s|\n", 6, "DynamicWidth");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Correct cases
	ft_result = ft_printf("Output = |%s|\n", "Hello");
	printf_result = printf("Output = |%s|\n", "Hello");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-10s|\n", "World");
	printf_result = printf("Output = |%-10s|\n", "World");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.6s|\n", "LongText");
	printf_result = printf("Output = |%.6s|\n", "LongText");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%10.5s|\n", "ShortText");
	printf_result = printf("Output = |%10.5s|\n", "ShortText");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*.*s|\n", 8, 4, "DynamicWidth");
	printf_result = printf("Output = |%*.*s|\n", 8, 4, "DynamicWidth");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%10s|\n", "Hello");
	printf_result = printf("Output = |%10s|\n", "Hello");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-10.6s|\n", "LongText");
	printf_result = printf("Output = |%-10.6s|\n", "LongText");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.*s|\n", 4, "Precision");
	printf_result = printf("Output = |%.*s|\n", 4, "Precision");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%05s|\n", "ZeroPadding");
	printf_result = printf("Output = |%05s|\n", "ZeroPadding");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-*s|\n", 12, "DynamicWidth");
	printf_result = printf("Output = |%-*s|\n", 12, "DynamicWidth");
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);
	
	ft_printf("\n--------------- The end of the test ---------------\n");

	return 0;
}
