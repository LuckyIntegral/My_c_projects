/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:48:01 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/04 13:07:50 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int lsize;
	unsigned int dsize;

	lsize = 0;
	dsize = 0;
	while (dest[dsize])
		dsize++;
	while (*dest && size > 0 && size--)
	{
		dest++;
		lsize++;
	}
	while (*src && size > 1 && size--)
		*dest++ = *src++;
	if (size == 1)
		*dest = '\0';
	return (dsize + lsize);
}

// #include <stdio.h>

// int main()
// {
// 	char dest[20] = "Hello, ";
// 	char *src1 = "world!";
// 	unsigned int result1 = ft_strlcat(dest, src1, sizeof(dest));
// 	printf("Result: %u, Destination: \"%s\"\n", result1, dest);

// 	char dest2[10] = "Hello";
// 	char *src2 = "world!";
// 	unsigned int result2 = ft_strlcat(dest2, src2, sizeof(dest2));
// 	printf("Result: %u, Destination: \"%s\"\n", result2, dest2);

// 	char dest3[20] = "Hello, ";
// 	char *src3 = "world!";
// 	unsigned int result3 = ft_strlcat(dest3, src3, 5);
// 	printf("Result: %u, Destination: \"%s\"\n", result3, dest3);

// 	return 0;
// }
