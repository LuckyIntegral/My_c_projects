/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:46:39 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/17 23:25:09 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*branch;

	if (!*root)
	{
		branch = btree_create_node(item);
		*root = branch;
		return ;
	}
	if (cmpf((*root)->item, item) <= 0)
		btree_insert_data(&((*root)->right), item, cmpf);
	else
		btree_insert_data(&((*root)->left), item, cmpf);
}

// #include <stdio.h>

// void	ft_print_btree(t_btree *list)
// {
// 	printf("%s", (char*)list->item);
// 	if (list->left)
// 	{
// 		printf(" L={");
// 		ft_print_btree(list->left);
// 		printf("}");
// 	}
// 	if (list->right)
// 	{
// 		printf(" R={");
// 		ft_print_btree(list->right);
// 		printf("}");
// 	}
// }

// int ft_strcmp(void *s1, void *s2)
// {
// 	while (*(char *)s1 && *(char *)s1 == *(char *)s2)
// 	{
// 		s1++;
// 		s2++;
// 	}
// 	return (*(char *)s1 - *(char *)s2);
// }

// int main(int c, char **v)
// {
// 	t_btree	*list = 0;

// 	while (--c)
// 	{
// 		btree_insert_data(&list, v[c], &ft_strcmp);
// 	}
// 	ft_print_btree(list);
// 	return 0;
// }
