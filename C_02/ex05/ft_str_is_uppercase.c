/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:39:57 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 17:41:14 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[] = "QWERTY";
// 	char str2[] = "qWERT1234";
// 	char str3[] = "qwerty";

// 	int result1 = ft_str_is_uppercase(str1);
// 	int result2 = ft_str_is_uppercase(str2);
// 	int result3 = ft_str_is_uppercase(str3);

// 	printf("String: %s\nIs upercase: %d\n", str1, result1);
// 	printf("String: %s\nIs upercase: %d\n", str2, result2);
// 	printf("String: %s\nIs upercase: %d\n", str3, result3);

// 	return 0;
// }
