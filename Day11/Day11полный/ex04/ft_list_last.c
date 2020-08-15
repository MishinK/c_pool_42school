/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:35:25 by ashea             #+#    #+#             */
/*   Updated: 2020/03/10 16:35:59 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_list_last(t_list *begin_list)
{
    t_list *tmp;
   if (!begin_list)
       return (NULL);
    tmp = begin_list;
    while (tmp->next)
        tmp = tmp->next;
    return (tmp);
}

t_list    *ft_create_elem(void *data);

int main()
{
    t_list* list = 0;
    //list = ft_create_elem("asdf");
    printf("%p\n", ft_list_last(list));
   /* list->next = ft_create_elem("qwer");
    list->next->next = ft_create_elem("zxcv");
    printf("%s\n", (char*)(ft_list_last(list)->data));
    list = ft_create_elem("asdf");
    list->next = ft_create_elem("qwer");
    list->next->next = ft_create_elem("zxcv");
    list->next->next->next = ft_create_elem("uiop");
    printf("%s\n", (char*)(ft_list_last(list)->data));
    list->next->next->next->next = ft_create_elem("hjkl");
    printf("%s\n", (char*)(ft_list_last(list)->data));
    */
    return (0);
}
