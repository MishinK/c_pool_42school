/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 22:27:58 by ashea             #+#    #+#             */
/*   Updated: 2020/03/11 16:12:32 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *data;
	t_list *early1;
	t_list *early2;

	if (*begin_list)
	{
		early1 = *begin_list;
		while (early1)
		{
			early2 = *begin_list;
			while (early2->next)
			{
				if ((*cmp)(early2->data, early2->next->data) > 0)
				{
					data = early2->data;
					early2->data = early2->next->data;
					early2->next->data = data;
				}
				early2 = early2->next;
			}
			early1 = early1->next;
		}
	}
}
