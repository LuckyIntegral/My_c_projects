/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:38:30 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/27 22:03:20 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

#include "ft_printf.h"
#include <stdio.h>

int main()
{

	int ft_result, printf_result;

	// Correct cases
	ft_result = ft_printf("Output = |%10d|\n", 12345);
	printf_result = printf("Output = |%10d|\n", 12345);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-10.3d|\n", -9876);
	printf_result = printf("Output = |%-10.3d|\n", -9876);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.*d|\n", 4, -6789);
	printf_result = printf("Output = |%.*d|\n", 4, -6789);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%05d|\n", 42);
	printf_result = printf("Output = |%05d|\n", 42);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%-*d|\n", 8, 987);
	printf_result = printf("Output = |%-*d|\n", 8, 987);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%0*d|\n", 8, 12345);  // Mixing '0' and '*' flags
	printf_result = printf("Output = |%0*d|\n", 8, 12345); // Mixing '0' and '*' flags
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%d|\n");  // Missing argument
	printf_result = printf("Output = |%d|\n"); // Missing argument
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Correct cases
	ft_result = ft_printf("Output = |%010.5d|\n", -123);
	printf_result = printf("Output = |%010.5d|\n", -123);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%.*10d|\n", 3, -456);
	printf_result = printf("Output = |%.*10d|\n", 3, -456);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*.*d|\n", 8, 4, 789);
	printf_result = printf("Output = |%*.*d|\n", 8, 4, 789);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// More mix flags
	ft_result = ft_printf("Output = |%-07.4d|\n", 567);
	printf_result = printf("Output = |%-07.4d|\n", 567);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%0*d|\n", 6, 890);
	printf_result = printf("Output = |%0*d|\n", 6, 890);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	ft_result = ft_printf("Output = |%*.*d|\n", -16, 16, 123);
	printf_result = printf("Output = |%*.*d|\n", -16, 16, 123);
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	// Avoiding error cases
	ft_result = ft_printf("Output = |%*d|\n", 8, "Invalid");  // Avoiding mismatched argument types
	printf_result = printf("Output = |%*d|\n", 8, "Invalid"); // Avoiding mismatched argument types
	printf("> {%d}\n", ft_result);
	printf("> {%d}\n", printf_result);

	return 0;
}
