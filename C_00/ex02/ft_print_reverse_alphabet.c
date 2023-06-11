/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:28:26 by vfrants           #+#    #+#             */
/*   Updated: 2023/06/11 12:31:51 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z' + 1;
	while (c-- > 'a')
		write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }
