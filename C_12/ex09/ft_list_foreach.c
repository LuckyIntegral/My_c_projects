/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:24:34 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/14 17:36:06 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}

// #include <stdio.h>

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*component;

// 	component = (t_list *)malloc(sizeof(t_list));
// 	if (!component)
// 		return (component);
// 	component->data = data;
// 	component->next = NULL;
// 	return (component);
// }

// void ft_list_push_front(t_list **begin_list, void *data)
// {
// 	t_list	*el ;

// 	el = ft_create_elem(data);
// 	el->next = *begin_list;
// 	*begin_list = el;
// }

// t_list	*ft_list_push_strs(int size, char **strs)
// {
// 	t_list	*begin_list;
// 	int	i;

// 	i = 0;
// 	while (i < size)
// 	{
// 		ft_list_push_front(&begin_list, strs[i]);
// 		i++;
// 	}
// 	return (begin_list);
// }

// void ft_printf(void *el)
// {
// 	printf("%s", (char *)el);
// }

// int main(int argc, char *argv[])
// {
// 	t_list	*el1 = ft_list_push_strs(argc, argv);
// 	// ft_print_list(el1);
// 	ft_list_foreach(el1, &ft_printf);
// 	return 0;
// }
