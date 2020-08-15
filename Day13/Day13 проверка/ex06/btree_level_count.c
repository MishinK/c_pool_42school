/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 12:48:28 by ashea             #+#    #+#             */
/*   Updated: 2020/03/12 12:48:32 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_btree.h"

int        btree_level_count(t_btree *root)
{
    int    lvl_l;
    int    lvl_r;
    int    count;
    
    if (root == NULL)
        return (0);
    count = 0;
    lvl_l = btree_level_count(root->left);
    if (lvl_l > count)
        count = lvl_l;
    lvl_r = btree_level_count(root->right);
    if (lvl_r > count)
        count = lvl_r;
    return (1 + count);
}
