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


void ft_list_reverse_fun(t_list *begin_list)
{
    void *data;
    t_list *list;
    int i;
    int j;
    int number;
    
    number = 0;
    
    list = begin_list;
    while (list)
    {
        list = list->next;
        number++;
    }
    
    
        i = 0;
        while (i < number)
        {
            j = i;
            list = begin_list;
            while (j < number -1)
            {
                    data = list->data;
                    list->data = list->next->data;
                    list->next->data = data;
                    list = list->next;
                    j++;
            }
            i++;
        }
}

