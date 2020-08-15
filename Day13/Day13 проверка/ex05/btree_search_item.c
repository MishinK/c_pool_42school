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

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
    void    *search_item;
    
    search_item = NULL;
    if (!search_item && root->left)
        search_item = btree_search_item(root->left, data_ref, cmpf);
    if (!search_item && cmpf(root->item, data_ref) == 0)
        return (root->item);
    if (!search_item && root->right)
        search_item = btree_search_item(root->right, data_ref, cmpf);
    return (search_item);
}
