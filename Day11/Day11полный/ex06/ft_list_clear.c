/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 17:04:34 by ashea             #+#    #+#             */
/*   Updated: 2020/03/10 17:06:31 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void ft_list_clear(t_list **begin_list)
{
    t_list *tmp = 0;
    
   while (*begin_list)
    {
      tmp = *begin_list;
      *begin_list = (*begin_list)->next;
      free(tmp);
    }
    *begin_list = NULL;
}

t_list  *ft_create_elem(void *data)
{
    t_list *list;
    list = (t_list *)malloc(sizeof(t_list));
    if (list)
    {
        list->data = data;
        list->next = NULL;
    }
    return (list);
}

int main(int argc, char **argv)
{
    t_list *t;
    t = ft_create_elem("a");
    t->next = ft_create_elem("v");
    t->next->next = ft_create_elem("d");
     t->next->next->next = ft_create_elem("e");
     t->next->next->next->next = ft_create_elem("f");
    t_list *d;
    d = t;
    ft_list_clear(&t);
    printf("%s", d->data);
    return (0);
}


