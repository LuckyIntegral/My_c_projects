/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:52:37 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 18:06:05 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_alpha_char(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char *ft_strcapitalize(char *str)
{
	int flag;
	int	i;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (is_alpha_char(str[i]))
		{
			if (is_uppercase(str[i]))
			{
				str[i] = str[i] + ('a' - 'A');
			}
			if (flag && is_lowercase(str[i]))
			{
				str[i] = str[i] - ('a' - 'A');
				flag = 0;
			}
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[] = "hello world";
// 	char str2[] = "HELLO WORLD";
// 	char str3[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

// 	printf("Before: %s\n", str1);
// 	printf("After:  %s\n", ft_strcapitalize(str1));

// 	printf("Before: %s\n", str2);
// 	printf("After:  %s\n", ft_strcapitalize(str2));

// 	printf("Before: %s\n", str3);
// 	printf("After:  %s\n", ft_strcapitalize(str3));

// 	return 0;
// }
