/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:27:50 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/19 20:47:13 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strbcmp(char *s1, char *s2, int b)
{
	int i;

	i = 0;
	while (s1[b + i] && s2[i] && s1[b + i] == s2[i])
		i++;
	if (!s2[i])
		return (0);
	return (s1[b + i] - s2[i]);
}

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0] && !ft_strbcmp(str, to_find, i))
			break ;
		i++;
	}
	return (&str[i]);
}

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	printf("%s", ft_strstr("qqqqqh ggggg h qqqqq", " h"));
// 	return 0;
// }
