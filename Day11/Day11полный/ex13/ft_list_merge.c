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


 void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *tbm;
   if(*begin_list1)
   {
       tbm = *begin_list1;
       while(tbm->next)
           tbm = tbm->next;
       tbm->next = begin_list2;
       
   }
    else
        *begin_list1 = begin_list2;
}
