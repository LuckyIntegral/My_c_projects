/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:38:37 by vfrants           #+#    #+#             */
/*   Updated: 2023/09/01 21:15:05 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	res;

	res = ft_strlen(dst) + ft_strlen(src);
	if (!dstsize)
		return (ft_strlen(src));
	while (*dst && dstsize--)
		dst++;
	while (*src && dstsize-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (res);
}
