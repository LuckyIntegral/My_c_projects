/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:38:26 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/13 22:09:40 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*el;

	el = begin_list;
	while (nbr && el)
	{
		el = el->next;
		nbr--;
	}
	return (el);
}

// #include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	t_list *list = ft_list_push_strs(argc, argv);
// 	for (int i = 0; i < argc; i++)
// 		printf("%s, ", (char *)(ft_list_at(list, i)->data));
// 	return 0;
// }
