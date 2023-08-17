/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:14:25 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/17 20:39:26 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new;
	t_list	*this;
	t_list	*prev;

	new = ft_create_elem(data);
	this = *begin_list;
	if (!*begin_list || cmp(this->data, new->data) > 0)
	{
		new->next = *begin_list;
		*begin_list = new;
		return ;
	}
	while (this)
	{
		if (cmp(this->data, new->data) > 0)
			break ;
		prev = this;
		this = this->next;
	}
	new->next = this;
	prev->next = new;
}

// #include <stdio.h>

// int ft_strcmp(char *s1, char *s2)
// {
// 	while (*s1 && *s1 == *s2)
// 	{
// 		s1++;
// 		s2++;
// 	}
// 	return (*s1 - *s2);
// }

// void ft_print_list(t_list *list)
// {
//     while (list)
//     {
//         printf("%s, ", (char *)list->data);
//         list = list->next;
//     }
// }

// int main()
// {
//     t_list *el1 = (t_list *)malloc(sizeof(t_list));
//     el1->data = "b";

//     t_list *el2 = (t_list *)malloc(sizeof(t_list));
//     el2->data = "d";

//     t_list *el3 = (t_list *)malloc(sizeof(t_list));
//     el3->data = "f";

//     t_list *el4 = (t_list *)malloc(sizeof(t_list));
//     el4->data = "h";

//     t_list *el5 = (t_list *)malloc(sizeof(t_list));
//     el5->data = "i";

//     t_list *el6 = (t_list *)malloc(sizeof(t_list));
//     el6->data = "k";
//     el6->next = NULL;

//     el1->next = el2;
//     el2->next = el3;
// 	el3->next = el4;
//     el4->next = el5;
//     el5->next = el6;

//     printf("List 1: ");
//     ft_print_list(el1);

// 	ft_sorted_list_insert(&el1, "w", &ft_strcmp);

//     printf("\nReversed List: ");
//     ft_print_list(el1);

//     t_list *current = el1;
//     while (current)
//     {
//         t_list *temp = current;
//         current = current->next;
//         free(temp);
//     }

//     return (0);
// }
