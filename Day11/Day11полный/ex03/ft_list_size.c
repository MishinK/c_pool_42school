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

int ft_list_size(t_list *begin_list)
{
    int size;
    
    size = 0;
    while (begin_list)
    {
        begin_list = begin_list->next;
        size++;
    }
    return (size);
}
