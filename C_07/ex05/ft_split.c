/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:13:13 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/08 00:34:02 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_contains(char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int	ft_count_words(char *str, char *set)
{
	int	counter;

	counter = 1;
	while (ft_contains(set, *str))
		str++;
	while (*str)
	{
		if (ft_contains(set, *str) &&
			*(str + 1) != '\0' && !ft_contains(set, *(str + 1)))
			counter++;
		str++;
	}
	return (counter);
}

char *ft_strdup(char *src, int beggin, int end)
{
	char	*new;
	int	len;
	int	i;

	len = end - beggin;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (0);
	i = 0;
	while (i < len)
	{
		new[i] = src[beggin + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char *ft_setpar(char *str, char *set, int *i)
{
	int beggin;

	while (ft_contains(set, str[*i]))
		(*i)++;
	beggin = *i;
	while (!ft_contains(set, str[*i]) && str[*i])
		(*i)++;
	return (ft_strdup(str, beggin, *i));
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int current;
	int	words;
	int	i;

	words = ft_count_words(str, charset);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (0);
	i = 0;
	current = 0;
	while (i < words)
	{
		res[i] = ft_setpar(str, charset, &current);
		i++;
	}
	res[i] = 0;
	return (res);
}

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	char **res = ft_split(",,Hello world!, Long time no see you!,,,", ", !");
// 	while (*res)
// 	{
// 		printf("%s \n", *res);
// 		res++;
// 	}
// 	return (0);
// }
