/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 11:58:49 by ashea             #+#    #+#             */
/*   Updated: 2020/03/11 15:03:53 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *back;

	back = *begin_list;
	if (back)
	{
		while (back->next)
			back = back->next;
		back->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
