/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 23:59:16 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/20 00:17:17 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;

	new = (char *)malloc(sizeof (char) * (ft_strlen(s1) + 1));
	if (!new)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strlcpy(new, s1, ft_strlen(s1) + 1);
	return (new);
}
