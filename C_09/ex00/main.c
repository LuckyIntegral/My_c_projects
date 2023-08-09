/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 21:07:25 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/09 21:29:34 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char *str);

int main(int argc, char *argv[])
{
	ft_putstr(argv[0]);
	return 0;
}

// gcc -c main.c -o main.o
// gcc -o main main.o -L . libft.a
// ./main

// or

// cc main.c -L . libft.a
