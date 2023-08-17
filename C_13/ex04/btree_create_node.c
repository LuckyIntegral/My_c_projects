/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:54:37 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/17 21:04:34 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
	t_btree	*new;

	new = (t_btree*)malloc(sizeof (t_btree));
	new->left = 0;
	new->right = 0;
	new->item = item;
	return (new);
}

// #include <stdio.h>

// void	ft_print_btree(t_btree *list)
// {
// 	printf("|%s|", (char*)list->item);
// 	if (list->left)
// 	{
// 		printf("R={");
// 		ft_print_btree(list->left);
// 		printf("}");
// 	}
// 	if (list->right)
// 	{
// 		printf("L={");
// 		ft_print_btree(list->right);
// 		printf("}");
// 	}
// }

// int main(int c, char **v)
// {
// 	t_btree	*list;

// 	list = btree_create_node(*v);
// 	ft_print_btree(list);
// 	return 0;
// }
