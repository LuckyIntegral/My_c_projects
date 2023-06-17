/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:44:36 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 17:49:50 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[] = "Hello World!";
// 	char str2[] = "12345";
// 	char str3[] = "";

// 	printf("Before: %s\n", str1);
// 	printf("After:  %s\n", ft_strupcase(str1));

// 	printf("Before: %s\n", str2);
// 	printf("After:  %s\n", ft_strupcase(str2));

// 	printf("Before: %s\n", str3);
// 	printf("After:  %s\n", ft_strupcase(str3));

// 	return 0;
// }
