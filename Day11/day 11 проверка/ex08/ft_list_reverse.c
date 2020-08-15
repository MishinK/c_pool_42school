/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 19:07:01 by ashea             #+#    #+#             */
/*   Updated: 2020/03/11 15:52:06 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *actual;
	t_list *next;
	t_list *early;

	early = NULL;
	actual = *begin_list;
	while (actual)
	{
		next = actual->next;
		actual->next = early;
		early = actual;
		actual = next;
	}
	*begin_list = early;
}
