/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 19:19:35 by ashea             #+#    #+#             */
/*   Updated: 2020/03/13 20:43:57 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int	lvl_l;
	int	lvl_r;
	int	count;

	if (root == NULL)
		return (0);
	count = 0;
	if (root->left)
	{
		lvl_l = btree_level_count(root->left) + 1;
		if (lvl_l > count)
			count = lvl_l;
	}
	if (root->right)
	{
		lvl_r = btree_level_count(root->right) + 1;
		if (lvl_r > count)
			count = lvl_r;
	}
	return (count);
}

void	btree_apply(t_btree *root, int current_level, int *is_first_elem_in_lvl,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (root)
	{
		if (is_first_elem_in_lvl[current_level] == 1)
			applyf(root->item, current_level, 0);
		else
		{
			applyf(root->item, current_level, 1);
			is_first_elem_in_lvl[current_level] = 1;
		}
		btree_apply(root->left, current_level + 1,
				is_first_elem_in_lvl, applyf);
		btree_apply(root->right, current_level + 1,
				is_first_elem_in_lvl, applyf);
	}
}

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int	i;
	int	lvl_count;
	int	*is_first_elem_in_lvl;

	if (root)
	{
		lvl_count = btree_level_count(root);
		is_first_elem_in_lvl = (int*)malloc(sizeof(int) * lvl_count);
		i = 0;
		while (i < lvl_count)
		{
			is_first_elem_in_lvl[i] = 0;
			i++;
		}
		btree_apply(root, 0, is_first_elem_in_lvl, applyf);
	}
}
