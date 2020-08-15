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

t_btree *btree_create_node(void *item)
{
    t_btree    *node;
    
    node = malloc(sizeof(t_btree));
    if (node)
    {
        node->item = item;
        node->left = NULL;
        node->right = NULL;
    }
    return (node);
}

void btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
    if (root == NULL)
        return ;
    btree_apply_suffix(root->left, applyf);
    btree_apply_suffix(root->right, applyf);
    applyf(root->item);
}

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(char *, char *))
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

int        btree_level_count(t_btree *root)
{
    int    lvl_l;
    int    lvl_r;
    int    count;
    
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

int main()
{
    t_btree subsubtree = {NULL, NULL, "2"};
    t_btree subsubtree2 = {NULL, NULL, "8"};
    t_btree subsubtree3 = {NULL, NULL, "3"};
    t_btree subsubtree4 = {NULL, NULL, "7"};
    t_btree subtree = {&subsubtree, &subsubtree2, "4"};
    t_btree subtree2 = {&subsubtree3, &subsubtree4, "6"};
    t_btree tree = {&subtree, &subtree2, "5"};
    
    printf("tree->item: %s\n", tree.item);
    printf("tree->left->item: %s\n", tree.left->item);
    printf("tree->left->left->item: %s\n", tree.left->left->item);
    printf("tree->left->right->item: %s\n", tree.left->right->item);
    printf("tree->right->item: %s\n", tree.right->item);
    printf("tree->right->left->item: %s\n", tree.right->left->item);
    printf("tree->right->right->item: %s\n", tree.right->right->item);
    
   
    printf("\n-- DISPLAY SUFFIX1 -- OK\n");
    btree_apply_suffix(&tree, &display);
   
    printf("\n-- LEVEL COUNT -- OK\n");
    printf("%d\n", btree_level_count(&tree));
    
    t_btree *tree2 = &tree;
    btree_insert_data(&tree2, "5", &ft_strcmp);
    
    printf("\n-- DISPLAY SUFFIX2 -- OK\n");
    btree_apply_suffix(tree2, &display);
    printf("\n-- LEVEL COUNT2 -- OK\n");
    printf("%d\n", btree_level_count(tree2));
    
    t_btree *tree3 = tree2;
    btree_insert_data(&tree3, "5", &ft_strcmp);
    
    printf("\n-- DISPLAY SUFFIX3 -- OK\n");
    btree_apply_suffix(tree3, &display);
    printf("\n-- LEVEL COUNT3 -- OK\n");
    printf("%d\n", btree_level_count(tree3));
    
    return (0);
}

