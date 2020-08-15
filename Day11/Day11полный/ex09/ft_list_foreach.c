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

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	   while (begin_list)
	   {
		   (*f)(begin_list->data);
		   begin_list = begin_list->next;
	   }
}

