/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 00:20:53 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/20 11:50:19 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int	size;

	if (!s)
		return (NULL);
	while (*s && start--)
		s++;
	if (!*s || !len)
		return ("");
	size = MIN(ft_strlen(s) + 1, len + 1);
	new = (char *)malloc(sizeof (char) * size);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s, size);
	return (new);
}
