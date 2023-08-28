/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:54:37 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/20 12:05:11 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	char	*new;
	size_t	size;

	size = ft_strlen(s1);
	size += ft_strlen(s2);
	size++; // for '\0'
	new = (char *)malloc(sizeof (char) * size);
	if (!new)
		return (NULL);
	buffer = new;
	while (*s1)
		*new++ = *s1++;
	while (*s2)
		*new++ = *s2++;
	*new = '\0';
	return (buffer);
}
