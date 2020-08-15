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
#include <stdio.h>

t_list    *ft_create_elem(void *data);

t_list *ft_list_push_params(int ac, char **av)
{
    t_list *params = 0;
    t_list *tmp = 0;
    int i;
    
    i = 0;
    while (i < ac)
    {
        params = ft_create_elem(av[i]);
        params->next = tmp;
        tmp = params;
        i++;
    }
    return (params);
}

