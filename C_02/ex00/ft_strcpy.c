/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:16:12 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 17:20:27 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str1[] = "String";
// 	char str2[] = "Test string";

// 	printf("%s\n", str1);
// 	ft_strcpy(str1, str2);
// 	printf("%s\n", str1);
// 	return (0);
// }
