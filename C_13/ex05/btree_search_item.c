/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 22:50:27 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/17 23:18:10 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void *btree_search_item(t_btree *root, void *data_ref, int
	(*cmpf)(void *, void *))
{
	if (!root)
		return (NULL);
	if (!cmpf(root->item, data_ref))
		return (root->item);
	if (cmpf(root->item, data_ref) < 0)
		return (btree_search_item(root->right, data_ref, cmpf));
	return (btree_search_item(root->left, data_ref, cmpf));
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

// 	list = btree_create_node(v[0]);
// 	list->left = btree_create_node(v[1]);
// 	list->right = btree_create_node(v[2]);
// 	list->left->left = btree_create_node(v[3]);
// 	list->left->right = btree_create_node(v[4]);
// 	list->right->left = btree_create_node(v[5]);
// 	list->right->right = btree_create_node(v[6]);

// 	char *item = (char *)btree_search_item(list, "one", &ft_strcmp);
// 	printf("%s", item);

// 	ft_print_btree(list);
// 	return 0;
// }
