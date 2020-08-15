/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 17:04:34 by ashea             #+#    #+#             */
/*   Updated: 2020/03/11 15:25:29 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*params;
	t_list	*tmp;
	int		i;

	i = 0;
	params = NULL;
	tmp = NULL;
	while (i < ac)
	{
		params = ft_create_elem(av[i]);
		params->next = tmp;
		tmp = params;
		i++;
	}
	return (params);
}
