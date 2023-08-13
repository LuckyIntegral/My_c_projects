/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 08:48:03 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/13 08:52:37 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	char	*temp;
	int	len;
	int	i;

	len = ft_tablen(tab);
	while (len - 1)
	{
		i = 0;
		while (i < len - 1)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		len--;
	}
}

// #include <stdio.h>

// int ft_strcmp(char *s1, char *s2)
// {
// 	while (*s1 && *s1 == *s2)
// 	{
// 		s1++;
// 		s2++;
// 	}
// 	return (*s2 - *s1);
// }

// int main(int argc, char *argv[])
// {
// 	ft_advanced_sort_string_tab(++argv, &ft_strcmp);
// 	while (*argv)
// 	{
// 		printf("%s, ", *argv);
// 		argv++;
// 	}
// 	return 0;
// }
