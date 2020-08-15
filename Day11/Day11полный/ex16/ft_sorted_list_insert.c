/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 22:27:58 by ashea             #+#    #+#             */
/*   Updated: 2020/03/10 22:37:46 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_list.h"
t_list    *ft_create_elem(void *data);

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

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
    t_list *data;
    t_list *early1;
    t_list *early2;
    if (*begin_list){
        early1 = *begin_list;
        while (early1)
        {
            early2 = *begin_list;
            while (early2 ->next)
            {
                if ((*cmp)(early2->data, early2->next->data) > 0)
                {
                    data = early2->data;
                    early2->data = early2->next->data;
                    early2->next->data = data;
                }
                early2 = early2->next;
            }
            early1 = early1->next;
        }
    }
}

void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    ft_list_push_front(begin_list, data);
    ft_list_sort(begin_list, cmp);

}

