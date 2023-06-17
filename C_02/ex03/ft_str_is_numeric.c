/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:34:46 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 17:36:23 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[] = "23456";
// 	char str2[] = "Hello123";
// 	char str3[] = "00994 344";

// 	int result1 = ft_str_is_numeric(str1);
// 	int result2 = ft_str_is_numeric(str2);
// 	int result3 = ft_str_is_numeric(str3);

// 	printf("String: %s\nIs numeric: %d\n", str1, result1);
// 	printf("String: %s\nIs numeric: %d\n", str2, result2);
// 	printf("String: %s\nIs numeric: %d\n", str3, result3);

// 	return 0;
// }
