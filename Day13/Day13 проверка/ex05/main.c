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

t_btree    *btree_create_node(void *item);
void    *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));


void    display(void *element)
{
    printf("%s\n", element);
}


int    ft_strcmp(char *s1, char *s2)
{
    unsigned int    i;
    
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if ((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0'))
        return (s1[i] - s2[i]);
    return (0);
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
    
    printf("\n-- SEARCH ITEM -- OK\n");
    printf("%s\n", btree_search_item(&tree, "4", &ft_strcmp));
    return (0);
}
