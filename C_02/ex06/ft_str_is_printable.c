/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:41:23 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 17:44:24 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[] = "qwerty";
// 	char str2[] = "erty\n";
// 	char str3[] = " ";

// 	int result1 = ft_str_is_printable(str1);
// 	int result2 = ft_str_is_printable(str2);
// 	int result3 = ft_str_is_printable(str3);

// 	printf("String: %s\nIs printable: %d\n", str1, result1);
// 	printf("String: %s\nIs printable: %d\n", str2, result2);
// 	printf("String: %s\nIs printable: %d\n", str3, result3);

// 	return 0;
// }
