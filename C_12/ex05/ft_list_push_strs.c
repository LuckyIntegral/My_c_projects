/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:04:58 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/15 16:47:18 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*el ;

	el = ft_create_elem(data);
	el->next = *begin_list;
	*begin_list = el;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin_list;
	int	i;

	i = 0;
	while (i < size)
	{
		ft_list_push_front(&begin_list, strs[i]);
		i++;
	}
	return (begin_list);
}

// #include <stdio.h>

// void ft_print_list(t_list *list)
// {
// 	while (list)
// 	{
// 		printf("%s, ", (char *)list->data);
// 		list = list->next;
// 	}
// }

// int main(int argc, char *argv[])
// {
// 	t_list	*el1 = ft_list_push_strs(argc, argv);
// 	ft_print_list(el1);
// 	return 0;
// }
