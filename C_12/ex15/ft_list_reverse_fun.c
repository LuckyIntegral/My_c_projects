/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:50:05 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/17 20:10:43 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
    // I will do it later:)
}

#include <stdio.h>

void ft_print_list(t_list *list)
{
    while (list)
    {
        printf("%s, ", (char *)list->data);
        list = list->next;
    }
}

int main()
{
    t_list *el1 = (t_list *)malloc(sizeof(t_list));
    el1->data = "a";

    t_list *el2 = (t_list *)malloc(sizeof(t_list));
    el2->data = "b";

    t_list *el3 = (t_list *)malloc(sizeof(t_list));
    el3->data = "c";

    t_list *el4 = (t_list *)malloc(sizeof(t_list));
    el4->data = "f";

    t_list *el5 = (t_list *)malloc(sizeof(t_list));
    el5->data = "e";

    t_list *el6 = (t_list *)malloc(sizeof(t_list));
    el6->data = "d";
    el6->next = NULL;

    el1->next = el2;
    el2->next = el3;
	el3->next = el4;
    el4->next = el5;
    el5->next = el6;

    printf("List 1: ");
    ft_print_list(el1);

	ft_list_reverse_fun(el1);

    printf("\nReversed List: ");
    ft_print_list(el1);

    t_list *current = el1;
    while (current)
    {
        t_list *temp = current;
        current = current->next;
        free(temp);
    }

    return (0);
}
