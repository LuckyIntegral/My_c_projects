/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:06:31 by vfrants           #+#    #+#             */
/*   Updated: 2023/09/01 21:41:57 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1) && set)
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1]) && set)
		len--;
	return (ft_substr(s1, 0, len));
}
