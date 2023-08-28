/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 22:13:22 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/19 01:23:02 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*csrc;
	char		*cdst;


	cdst = dst;
	csrc = src;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			cdst[len] = csrc[len];
	return (dst);
}
