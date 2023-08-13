/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 10:35:15 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/13 11:50:01 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last;
	t_list	*el;

	el = ft_create_elem(data);
	if (*begin_list)
	{
		last = *begin_list;
		while (last->next)
			last = last->next;
		last->next = el;
	}
	else
		*begin_list = el;
}

// #include <stdio.h>

// void ft_print_list(t_list *list)
// {
// 	while (list)
// 	{
// 		printf("%c, ", *(char *)list->data);
// 		list = list->next;
// 	}
// }

// int main(int argc, char *argv[])
// {
// 	int	a = 'a', b = 'b', c = 'c';
// 	t_list	*el1 = ft_create_elem(&a);
// 	t_list	*el2 = ft_create_elem(&b);
// 	el1->next = el2;

// 	ft_print_list(el1);
// 	printf("\n");
// 	ft_list_push_back(&el1, &c);
// 	ft_print_list(el1);

// 	free(el1);
// 	free(el2);
// 	return 0;
// }
