/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:21:47 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/19 20:27:00 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	n = 0;
	while (dest[n])
		n++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = 0;
	return (dest);
}

// #include <stdio.h>

// int main(int argc, char *v[])
// {

// 	printf("%s", ft_strncat(v[1], v[2], 5));
// 	return 0;
// }
