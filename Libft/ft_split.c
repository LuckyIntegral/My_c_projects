/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:23:36 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/20 12:36:49 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int	counter;

	counter = 1;
	while (*str == c)
		str++;
	while (*str)
	{
		if (*str == c && *(str + 1) != '\0' && *(str + 1) != c)
			counter++;
		str++;
	}
	return (counter);
}

static char	*ft_setpar(const char *str, char c, int *i)
{
	int beggin;

	while (c == str[*i])
		(*i)++;
	beggin = *i;
	while (c != str[*i] && str[*i])
		(*i)++;
	return (ft_substr(str, beggin, *i - beggin));
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int current;
	int	words;
	int	i;

	words = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (0);
	i = 0;
	current = 0;
	while (i < words)
	{
		res[i] = ft_setpar(s, c, &current);
		i++;
	}
	res[i] = NULL;
	return (res);
}
