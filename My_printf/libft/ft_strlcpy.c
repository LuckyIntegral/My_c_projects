/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:35:45 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/20 00:16:13 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*origin;

	origin = dst;
	if (!dst || !src)
		return (0);
	while (*src && --size)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = 0;
	return (ft_strlen(origin));
}
