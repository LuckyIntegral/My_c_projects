/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 23:19:28 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/17 23:29:14 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int btree_level_count(t_btree *root)
{
	int	number_left;
	int	number_right;

	if (!root)
		return (0);
	number_left = btree_level_count(root->left);
	number_right = btree_level_count(root->right);
	if (number_left > number_right)
		return (number_left + 1);
	return (number_right + 1);
}

// void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
// {
// 	t_btree	*branch;

// 	if (!*root)
// 	{
// 		branch = btree_create_node(item);
// 		*root = branch;
// 		return ;
// 	}
// 	if (cmpf((*root)->item, item) <= 0)
// 		btree_insert_data(&((*root)->right), item, cmpf);
// 	else
// 		btree_insert_data(&((*root)->left), item, cmpf);
// }

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

// t_btree *btree_create_node(void *item)
// {
// 	t_btree	*new;

// 	new = (t_btree*)malloc(sizeof (t_btree));
// 	new->left = 0;
// 	new->right = 0;
// 	new->item = item;
// 	return (new);
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

// 	printf("max depth is:%d", btree_level_count(list));
// 	return 0;
// }
