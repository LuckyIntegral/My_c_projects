/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:10:52 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/12 23:18:00 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	count;

	count = 0;
	while (length--)
		if (f(*tab++))
			count++;
	return (count);
}

// #include <stdio.h>

// int	func(char *str)
// {
// 	while (*str)
// 	{
// 		if (*str == 's')
// 			return (3);
// 		str++;
// 	}
// 	return (0);
// }

// int main()
// {
// 	char a1[] = "string1", a2[] = "string2", a3[] = "string3";
// 	char *arr[] = {a1, a2, a3};
// 	printf("%i", ft_count_if(arr, 3, func));
// }
