/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:40:04 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/17 20:48:47 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_sorted_list_insert(t_list **begin_list, t_list *new, int (*cmp)())
{
	t_list	*this;
	t_list	*prev;

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

void ft_sorted_list_merge(t_list **begin_list1, t_list
	*begin_list2, int (*cmp)())
{
	t_list	*el;

	while (begin_list2)
	{
		el = begin_list2->next;
		ft_sorted_list_insert(begin_list1, begin_list2, cmp);
		begin_list2 = el;
	}
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

// 	t_list *el7 = (t_list *)malloc(sizeof(t_list));
//     el7->data = "a";

//     t_list *el8 = (t_list *)malloc(sizeof(t_list));
//     el8->data = "c";

//     t_list *el9 = (t_list *)malloc(sizeof(t_list));
//     el9->data = "e";

//     t_list *el10 = (t_list *)malloc(sizeof(t_list));
//     el10->data = "g";

//     t_list *el11 = (t_list *)malloc(sizeof(t_list));
//     el11->data = "j";

//     t_list *el12 = (t_list *)malloc(sizeof(t_list));
//     el12->data = "m";

//     el7->next = el8;
//     el8->next = el9;
// 	el9->next = el10;
//     el10->next = el11;
//     el11->next = el12;
//     el12->next = NULL;

//     printf("List 1: ");
//     ft_print_list(el1);

// 	ft_sorted_list_merge(&el1, el7, &ft_strcmp);

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
