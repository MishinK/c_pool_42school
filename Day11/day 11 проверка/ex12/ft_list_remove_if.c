/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 22:27:58 by ashea             #+#    #+#             */
/*   Updated: 2020/03/11 16:07:19 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tbm;
	t_list *remove;

	if (*begin_list)
	{
		tbm = *begin_list;
		while (tbm->next)
		{
			if ((*cmp)(tbm->next->data, data_ref) == 0)
			{
				remove = tbm->next;
				tbm->next = tbm->next->next;
				free(remove);
			}
			tbm = tbm->next;
		}
		if ((*cmp)((*begin_list)->data, data_ref) == 0)
		{
			remove = *begin_list;
			*begin_list = (*begin_list)->next;
			free(remove);
		}
	}
}
