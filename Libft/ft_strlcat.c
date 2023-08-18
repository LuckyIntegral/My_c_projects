/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:38:37 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/19 01:45:11 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lsize;
	size_t	dsize;

	lsize = 0;
	dsize = 0;
	while (dst[dsize])
		dsize++;
	while (*dst && dstsize > 0 && dstsize--)
	{
		dst++;
		lsize++;
	}
	while (*src && dstsize > 1 && dstsize--)
		*dst++ = *src++;
	if (dstsize == 1)
		*dst = '\0';
	return (dsize + lsize);
}
