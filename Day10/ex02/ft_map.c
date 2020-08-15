/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:44:46 by ashea             #+#    #+#             */
/*   Updated: 2020/03/09 20:31:02 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *f_tab;

	i = 0;
	if (length < 1)
		return (NULL);
	f_tab = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		f_tab[i] = f(tab[i]);
		i++;
	}
	return (f_tab);
}
