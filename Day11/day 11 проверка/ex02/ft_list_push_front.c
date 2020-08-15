/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 11:58:49 by ashea             #+#    #+#             */
/*   Updated: 2020/03/11 15:11:58 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *front;

	if (*begin_list)
	{
		front = ft_create_elem(data);
		front->next = *begin_list;
		*begin_list = front;
	}
	else
		*begin_list = ft_create_elem(data);
}
