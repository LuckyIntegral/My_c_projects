/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:36:40 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 17:39:49 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[] = "dfghj";
// 	char str2[] = "Hello123";
// 	char str3[] = "fghjHfgh";

// 	int result1 = ft_str_is_lowercase(str1);
// 	int result2 = ft_str_is_lowercase(str2);
// 	int result3 = ft_str_is_lowercase(str3);

// 	printf("String: %s\nIs lowercase: %d\n", str1, result1);
// 	printf("String: %s\nIs lowercase: %d\n", str2, result2);
// 	printf("String: %s\nIs lowercase: %d\n", str3, result3);

// 	return 0;
// }
