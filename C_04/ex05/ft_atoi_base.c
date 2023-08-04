/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 23:10:14 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/04 23:31:15 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_base_symbol(char c, char *base)
{
	while (*base)
	{
		if (*base == c)
			return (1);
		base++;
	}
	return (0);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_get_position(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int ft_is_valid_base(char *base)
{
	int len;
	int i;
	int j;

	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	i = 0;
	while (i < len - 1)
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int sign;
	int number;

	len = ft_strlen(base);
	number = 0;
	sign = 1;
	if (!ft_is_valid_base(base))
		return (0);
	while (*str == ' ' || *str == '\f' || *str == '\n' ||
		   *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_is_base_symbol(*str, base))
	{
		number = number * len + ft_get_position(*str, base);
		str++;
	}
	return (sign * number);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", ft_atoi_base("101010", "01"));			// 42
// 	printf("%d\n", ft_atoi_base("3F", "0123456789ABCDEF")); // 63
// 	printf("%d\n", ft_atoi_base("456", "012345"));			// 29
// 	printf("%d\n", ft_atoi_base("111", "01"));				// 7
// 	printf("%d\n", ft_atoi_base("1234", "0123456789"));		// 1234
// 	printf("%d\n", ft_atoi_base("211011", "012"));			// 598
// 	printf("%d\n", ft_atoi_base("  -123", "0123456789"));	// -123
// 	printf("%d\n", ft_atoi_base("4A", "0123456789ABCDEF")); // 74
// 	printf("%d\n", ft_atoi_base("  ", "0123456789ABCDEF")); // 0
// 	printf("%d\n", ft_atoi_base("234", "22"));				// 0

// 	return 0;
// }
