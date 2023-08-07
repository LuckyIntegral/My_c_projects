/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:17:05 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/07 22:12:50 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int ft_is_valid_base(char *base);
int ft_strlen(char *str);

int	ft_numb_len(char *base, int number)
{
	int	base_len;
	int	size;

	base_len = ft_strlen(base);
	size = 0;
	if (number < 0)
		size++;
	while (number)
	{
		number /= base_len;
		size++;
	}
	return (size);
}

int	ft_modulus(int number)
{
	if (number >= 0)
		return (number);
	return (number * -1);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int	base_len;
	int nbr_size;
	int number;

	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	base_len = ft_strlen(base_to);
	nbr_size = ft_numb_len(base_to, number);
	res = malloc(sizeof(char) * nbr_size);
	if (number < 0)
		res[0] = '-';
	while (number)
	{
		res[--nbr_size] = base_to[ft_modulus(number % base_len)];
		number /= base_len;
	}
	return (res);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%s", ft_convert_base("-25hh", "0123456789", "01"));
// }
