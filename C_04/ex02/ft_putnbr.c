/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:51:12 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/04 15:02:17 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnmbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 1);
		else
		{
			write (1, "-", 1);
			ft_putnmbr(nb * -1);
		}
		return ;
	}
	if (nb >= 10)
		ft_putnmbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

// int main()
// {
// 	ft_putnmbr(15);
// 	ft_putnmbr(-10);
// 	ft_putnmbr(189);
// }
