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

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    unsigned int i;

    i = 1;
    
    if (!begin_list)
        return (NULL);
    
    while (begin_list && i <= nbr)
    {
        begin_list = begin_list->next;
        i++;
    }
    if (i <= nbr || nbr == 0)
        return (NULL);
    else
        return(begin_list);
}

