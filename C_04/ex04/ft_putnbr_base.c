/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:34:16 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/04 23:07:34 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_valid(char *base)
{
	int	len;
	int	i;
	int	j;

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

void	ft_rec_print(int nbr, char *base, int len)
{
	if (!nbr)
		return;
	ft_rec_print(nbr / len, base, len);
	write(1, &base[nbr % len], 1);
}

void ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (!ft_is_valid(base))
		return ;
	len = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	ft_rec_print(nbr, base, len);
}

// int main()
// {
// 	ft_putnbr_base(-63, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(63, "012");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(63, "01234567");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(64, "0123456789abcdef");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-12345, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(987654321, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(1000, "01234567");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(255, "0123456789ABCDEF");
// 	write(1, "\n", 1);

// 	return 0;
// }
