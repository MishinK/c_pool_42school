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

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
    if (*root == NULL)
    {   *root = btree_create_node(item);
        return ;
    }
    if ((*cmpf)(item, (*root)->item) < 0)
        btree_insert_data(&((*root)->left), item, cmpf);
    else
        btree_insert_data(&((*root)->right), item, cmpf);
}
