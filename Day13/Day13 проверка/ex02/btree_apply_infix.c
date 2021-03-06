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

 void btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
    if (root == NULL)
        return ;
    btree_apply_infix(root->left, applyf);
    applyf(root->item);
    btree_apply_infix(root->right, applyf);
}
