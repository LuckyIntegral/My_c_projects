/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:31:25 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/19 00:20:34 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*csrc;
	char		*cdst;

	if (dst == src || !n)
		return (dst);
	cdst = dst;
	csrc = src;
	while (n--)
	{
		*cdst = *csrc;
		cdst++;
		csrc++;
	}
	return (dst);
}
