/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 08:27:22 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/13 08:47:41 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}

void ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
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

// int main(int argc, char *argv[])
// {
// 	ft_sort_string_tab(++argv);
// 	while (*argv)
// 	{
// 		printf("%s, ", *argv);
// 		argv++;
// 	}
// 	return 0;
// }
