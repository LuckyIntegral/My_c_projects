/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:03:47 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/15 17:32:15 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*el;
	void	*temp;
	int	flag;

	flag = 1;
	while (flag)
	{
		flag = 0;
		el = *begin_list;
		while (el->next)
		{
			if (cmp(el->data, el->next->data) > 0)
			{
				temp = el->data;
				el->data = el->next->data;
				el->next->data = temp;
				flag++;
			}
			el = el->next;
		}
	}
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

// int ft_strcmp(char *s1, char *s2)
// {
// 	while (*s1 && *s1 == *s2)
// 	{
// 		s1++;
// 		s2++;
// 	}
// 	return (*s1 - *s2);
// }

// int main()
// {
//     t_list *el1 = (t_list *)malloc(sizeof(t_list));
//     el1->data = "a";

//     t_list *el2 = (t_list *)malloc(sizeof(t_list));
//     el2->data = "b";

//     t_list *el3 = (t_list *)malloc(sizeof(t_list));
//     el3->data = "c";

//     t_list *el4 = (t_list *)malloc(sizeof(t_list));
//     el4->data = "f";

//     t_list *el5 = (t_list *)malloc(sizeof(t_list));
//     el5->data = "e";

//     t_list *el6 = (t_list *)malloc(sizeof(t_list));
//     el6->data = "d";
//     el6->next = NULL;

//     el1->next = el2;
//     el2->next = el3;
// 	el3->next = el4;
//     el4->next = el5;
//     el5->next = el6;

//     printf("List 1: ");
//     ft_print_list(el1);

// 	ft_list_sort(&el1, &ft_strcmp);

//     printf("\nsorted List: ");
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
