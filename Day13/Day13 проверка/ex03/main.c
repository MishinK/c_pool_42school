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


#include <stdio.h>

void    btree_apply_suffix(t_btree *root, void (*applyf)(void *));

void    display(void *element)
{
    printf("%s\n", element);
}

int main(int argc, char *argv[])
{
    t_btree subsubtree = {NULL, NULL, "3"};
    t_btree subsubtree2 = {NULL, NULL, "4"};
    t_btree subsubtree3 = {NULL, NULL, "6"};
    t_btree subsubtree4 = {NULL, NULL, "7"};
    t_btree subtree = {&subsubtree, &subsubtree2, "2"};
    t_btree subtree2 = {&subsubtree3, &subsubtree4, "5"};
    t_btree tree = {&subtree, &subtree2, "1"};
    
    printf("tree->item: %s\n", tree.item);
    printf("tree->left->item: %s\n", tree.left->item);
    printf("tree->left->left->item: %s\n", tree.left->left->item);
    printf("tree->left->right->item: %s\n", tree.left->right->item);
    printf("tree->right->item: %s\n", tree.right->item);
    printf("tree->right->left->item: %s\n", tree.right->left->item);
    printf("tree->right->right->item: %s\n", tree.right->right->item);
    
    printf("\n-- DISPLAY SUFFIX -- OK\n");
    btree_apply_suffix(&tree, &display);
    return (0);
}
