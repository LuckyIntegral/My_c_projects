/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:12:42 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/14 17:22:52 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_reverse(t_list **begin_list)
{
	t_list	**buffer;
	t_list	*prev;
	t_list	*next;

	buffer = begin_list;
	prev = 0;
	while (*begin_list)
	{
		next = (*begin_list)->next;
		(*begin_list)->next = prev;
		prev = *begin_list;
		*begin_list = next;
	}
	*buffer = prev;
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
// 	ft_list_reverse(&el1);
// 	ft_print_list(el1);
// 	return 0;
// }
