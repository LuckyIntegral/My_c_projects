/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:00:45 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/12 23:10:12 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_any(char **tab, int(*f)(char*))
{
	while (*tab)
	{
		if (f(*tab))
			return (1);
		tab++;
	}
	return (0);
}

// #include <stdio.h>

// int	func(char *str)
// {
// 	while (*str)
// 	{
// 		if (*str == '1')
// 			return (3);
// 		str++;
// 	}
// 	return (0);
// }

// int main()
// {
// 	char a1[] = "string1", a2[] = "string2", a3[] = "string3";
// 	char *arr[] = {a1, a2, a3, 0};
// 	printf("%i", ft_any(arr, func));
// }
