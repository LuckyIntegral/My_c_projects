/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:50:22 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/15 13:20:12 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void
(*free_fct)(void *))
{
	t_list	*temp;
	t_list	*prev;
	t_list	*this;

	prev = 0;
	this = *begin_list;
	while (this)
	{
		temp = this->next;
		if (!cmp(this->data, data_ref))
		{
			free_fct(this->data);
			free(this);
			if (prev)
				prev->next = temp;
			else
				*begin_list = temp;
		}
		else
			prev = this;
		this = temp;
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

// void ft_print_list(t_list *list)
// {
// 	while (list)
// 	{
// 		printf("%s, ", (char *)list->data);
// 		list = list->next;
// 	}
// }

// int ft_strcmp(char *s1, char *s2)
// {
// 	while (*s1 && *s1 == *s2)
// 	{
// 		s1++;
// 		s2++;
// 	}
// 	return (*s1 - *s2);
// }

// void ft_printf(void *el)
// {
// 	printf("%s", (char *)el);
// }

// int main(int argc, char *argv[])
// {
// 	t_list	*el1 = ft_list_push_strs(argc, argv);
// 	ft_print_list(el1);
// 	printf("\n");
// 	ft_list_remove_if(&el1, "4", &ft_strcmp, &ft_printf);
// 	printf("\n");
// 	ft_print_list(el1);
// 	return 0;
// }
