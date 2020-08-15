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

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	   while (begin_list)
	   {
           if ((*cmp)(begin_list->data, data_ref) == 0)
               return (begin_list);
		   begin_list = begin_list->next;
	   }
    return (NULL);
}

