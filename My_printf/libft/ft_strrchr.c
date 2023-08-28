/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:58:31 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/19 02:06:10 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (*(s + len) == (char)c)
		return ((char *)(s + len));
	while (len--)
	{
		if (*(s + len) == (char)c)
			return ((char *)(s + len));
		s++;
	}
	return (NULL);
}
