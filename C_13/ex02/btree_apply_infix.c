/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:21:24 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/17 21:41:57 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_infix(root->left, applyf);
	applyf(root->item);
	btree_apply_infix(root->right, applyf);
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

// t_btree *btree_create_node(void *item)
// {
// 	t_btree	*new;

// 	new = (t_btree*)malloc(sizeof (t_btree));
// 	new->left = 0;
// 	new->right = 0;
// 	new->item = item;
// 	return (new);
// }

// void func(void *item)
// {
// 	printf("%s, ", (char *)item);
// }

// int main(int c, char **v)
// {
// 	t_btree	*list;

// 	list = btree_create_node(v[0]);
// 	list->left = btree_create_node(v[1]);
// 	list->right = btree_create_node(v[2]);
// 	list->left->left = btree_create_node(v[3]);
// 	list->left->right = btree_create_node(v[4]);
// 	list->right->left = btree_create_node(v[5]);
// 	list->right->right = btree_create_node(v[6]);
// 	// ft_print_btree(list);

// 	btree_apply_infix(list, &func);

// 	// printf("\n");
// 	// ft_print_btree(list);
// 	return 0;
// }
