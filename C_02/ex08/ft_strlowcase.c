/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:50:16 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 17:51:48 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[] = "HeLLo WorLd!";
// 	char str2[] = "12345";
// 	char str3[] = "";

// 	printf("Before: %s\n", str1);
// 	printf("After:  %s\n", ft_strlowcase(str1));

// 	printf("Before: %s\n", str2);
// 	printf("After:  %s\n", ft_strlowcase(str2));

// 	printf("Before: %s\n", str3);
// 	printf("After:  %s\n", ft_strlowcase(str3));

// 	return 0;
// }
