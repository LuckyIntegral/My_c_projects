/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:23:36 by vfrants           #+#    #+#             */
/*   Updated: 2023/09/02 18:49:24 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_word_counter(char const *s, char c)
{
	size_t count;

	if (!s || !*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static size_t	ft_wordlen(const char *s, char c)
{
	if (!ft_strchr(s, c))
		return (ft_strlen(s));
	else
		return (ft_strchr(s, c) - s);
}

static void	*ft_clean(char **strs, int i)
{
	while (i-- > 0)
		free(strs[i]);
	free(strs);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	len;
	char	**res;
	int	i;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (ft_word_counter(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			break ;
		len = ft_wordlen(s, c);
		res[i] = ft_substr(s, 0, len);
		if (!res[i++])
			return (ft_clean(res, --i));
		s += len;
	}
	res[i] = NULL;
	return (res);
}
