/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:20:41 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 17:26:48 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main()
// {
// 	char src[] = "Hello, world!";
// 	char dest[20];

// 	ft_strncpy(dest, src, sizeof(dest));

// 	printf("Source string: %s\n", src);
// 	printf("Destination string: %s\n", dest);

// 	return 0;
// }
