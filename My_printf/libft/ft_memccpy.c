/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:44:39 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/19 00:24:26 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char	*csrc;
	char		*cdst;

	cdst = dst;
	csrc = src;
	while (n--)
	{
		*cdst = *csrc;
		if (*csrc == (unsigned char)c)
			break ;
		csrc++;
		cdst++;
	}
	return (cdst);
}
