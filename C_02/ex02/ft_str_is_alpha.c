/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:26:58 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 17:33:35 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[] = "HelloWorld";
// 	char str2[] = "Hello123";
// 	char str3[] = "";

// 	int result1 = ft_str_is_alpha(str1);
// 	int result2 = ft_str_is_alpha(str2);
// 	int result3 = ft_str_is_alpha(str3);

// 	printf("String: %s\nIs alphabetic: %d\n", str1, result1);
// 	printf("String: %s\nIs alphabetic: %d\n", str2, result2);
// 	printf("String: %s\nIs alphabetic: %d\n", str3, result3);

// 	return 0;
// }
