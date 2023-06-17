/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:49:21 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/17 15:12:32 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return ft_strlen(src);
}

// int	main()
// {
// 	char src[] = "hello";
// 	char dest[] = "hiii";
// 	int n = 3;
// 	printf("Db = '%s', nb = '%d'\n", dest, n);
// 	int r = ft_strlcpy(dest, src, n);
// 	printf("Da = '%s', na = '%d'", dest, r);
// 	return (0);
// }
