/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:07:46 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/19 16:29:22 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strstr(const char *a, const char *b, size_t len)
{
	while (*a && *a == *b && len)
	{
		a++;
		b++;
		len--;
	}
	return (!len || !*b);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
			if (ft_strstr(haystack, needle, len))
				return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
