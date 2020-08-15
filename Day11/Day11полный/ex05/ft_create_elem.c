/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 10:52:36 by ashea             #+#    #+#             */
/*   Updated: 2020/03/10 11:02:36 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "./ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*element;
    element = malloc(sizeof(t_list));
	if (element)
    {
        element->data  = data;
        element->next = (NULL);
    }
    return (element);
}


