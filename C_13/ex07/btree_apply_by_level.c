/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 23:30:42 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/18 00:33:41 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
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

void	recursive_apply(t_btree *root, void (*applyf)(void *item, int
		current_level, int is_first_elem), int cur, int goal, int *checks)
{
	if (!root || cur > goal)
		return ;
	if (cur == goal)
	{
		applyf(root->item, goal, checks[goal]);
		checks[goal] = 0;
		return ;
	}
	recursive_apply(root->left, applyf, cur + 1, goal, checks);
	recursive_apply(root->right, applyf, cur + 1, goal, checks);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int
		current_level, int is_first_elem))
{
	int	depth;
	int	i;
	int	j;

	depth = btree_level_count(root);
	int	*arr = (int *)malloc(sizeof (int) * depth);
	j = 0;
	while (j < depth)
		arr[j++] = 1;
	i = 0;
	while (i < depth)
	{
		recursive_apply(root, applyf, 0, i, arr);
		i++;
	}
	free(arr);
}

// #include <stdio.h>

// void func(void *item, int current_level, int is_first_elem)
// {
// 	printf("Level: %d, first: %d, item: %s\n", current_level, is_first_elem, (char*)item);
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
// 	list->right->right->left = btree_create_node(v[7]);

// 	btree_apply_by_level(list, func);

// 	return 0;
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
