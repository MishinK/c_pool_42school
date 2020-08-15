/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 11:58:49 by ashea             #+#    #+#             */
/*   Updated: 2020/03/10 12:15:53 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_list.h"
#include <stdio.h>
#include <stdlib.h>
t_list	*ft_create_elem(void *data);

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *element;
    
    element = *begin_list;
    if(element)
    {
        while (element->next)
        element = element->next;
        element->next = ft_create_elem(data);
    }
    else
	*begin_list = ft_create_elem(data);
}


void crap_a_list(t_list* list)
{
    while (list)
    {
        printf("%s,", (char*)list->data);
        list = list->next;
    }
    printf("\n");
}

int main()
{
    t_list* list = 0;
    ft_list_push_back(&list, "asdf");
    crap_a_list(list);
    ft_list_push_back(&list, "qwer");
    ft_list_push_back(&list, "zxcv");
    crap_a_list(list);
    ft_list_push_back(&list, "uiop");
    ft_list_push_back(&list, "hjkl");
    crap_a_list(list);
}
