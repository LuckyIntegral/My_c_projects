/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:24:51 by vfrants           #+#    #+#             */
/*   Updated: 2023/07/28 15:59:40 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	n = 0;
	while (dest[n])
		n++;
	i = 0;
	while (src[i])
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = 0;
	return (dest);
}

// #include <stdio.h>

// int	main(int c, char *v[])
// {
// 	printf("%s", ft_strcat(v[1], v[2]));
// }
