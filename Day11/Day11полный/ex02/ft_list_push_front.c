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

t_list	*ft_create_elem(void *data);

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *element;
    
    if(*begin_list)
    {
        element = ft_create_elem(data);
        element->next = *begin_list;
        *begin_list = element;
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
    ft_list_push_front(&list, "asdf");
    crap_a_list(list);
    ft_list_push_front(&list, "qwer");
    ft_list_push_front(&list, "zxcv");
    crap_a_list(list);
    ft_list_push_front(&list, "uiop");
    ft_list_push_front(&list, "hjkl");
    crap_a_list(list);
}
