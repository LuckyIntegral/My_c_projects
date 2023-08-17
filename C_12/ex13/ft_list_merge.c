/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:45:13 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/15 17:03:09 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*el;

	if (!begin_list2)
		return ;
	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	el = *begin_list1;
	while (el->next)
		el = el->next;
	if (begin_list2 != *begin_list1)
		el->next = begin_list2;
}


// #include <stdio.h>

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
//     el1->data = "one";
//     el1->next = NULL;

//     t_list *el2 = (t_list *)malloc(sizeof(t_list));
//     el2->data = "two";
//     el2->next = NULL;

//     t_list *el3 = (t_list *)malloc(sizeof(t_list));
//     el3->data = "three";
//     el3->next = NULL;

//     el1->next = el2;
//     el2->next = el3;

//     t_list *el4 = (t_list *)malloc(sizeof(t_list));
//     el4->data = "four";
//     el4->next = NULL;

//     t_list *el5 = (t_list *)malloc(sizeof(t_list));
//     el5->data = "five";
//     el5->next = NULL;

//     t_list *el6 = (t_list *)malloc(sizeof(t_list));
//     el6->data = "six";
//     el6->next = NULL;

//     el4->next = el5;
//     el5->next = el6;

//     printf("List 1: ");
//     ft_print_list(el1);
//     printf("\nList 2: ");
//     ft_print_list(el4);

//     ft_list_merge(&el1, el4);

//     printf("\nMerged List: ");
//     ft_print_list(el1);

//     // Free memory
//     t_list *current = el1;
//     while (current)
//     {
//         t_list *temp = current;
//         current = current->next;
//         free(temp);
//     }

//     return 0;
// }
