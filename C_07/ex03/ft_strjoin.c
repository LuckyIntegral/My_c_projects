/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:08:24 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/07 11:47:26 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strslen(int size, char **strs)
{
	int	len;

	len = 0;
	while(size)
	{
		len += ft_strlen(strs[--size]);
	}
	return (len);
}

int	ft_putstr(char **res, int i, char *str)
{
	int	len;
	int	j;

	j = 0;
	len = ft_strlen(str);
	while(j < len)
	{
		(*res)[i + j] = str[j];
		j++;
	}
	return (i + j);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int	len;
	int	i;

	if (!size)
		return (res = malloc(0));
	len = ft_strslen(size, strs);
	i = 0;
	res = malloc(sizeof(char) * (len + ft_strlen(sep) * (size - 1)));
	if (res == NULL)
		return (res);
	len = 0;
	i = 0;
	while (i < size)
	{
		len = ft_putstr(&res, len, strs[i]);
		i++;
		if (i < size)
			len = ft_putstr(&res, len, sep);
	}
	return (res);
}

// #include <stdio.h>

// int	main(int c, char **v)
// {
// 	printf("%s", ft_strjoin(c, v, ", "));
// }
