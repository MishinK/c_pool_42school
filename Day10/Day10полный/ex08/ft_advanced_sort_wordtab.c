/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:12:45 by ashea             #+#    #+#             */
/*   Updated: 2020/03/04 19:43:15 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_advanced_sort_wordtab(char** tab, int (*cmp)(char*, char*))
{
	int i;
    int j;
    char *t;

	i = 0;
    while (tab[i])
    {
        j = 0;
	while (tab[i + j])
	{
		if (cmp(tab[i], tab[i + j]) > 0)
		{
            t = tab[i];
            tab[i] = tab[i+j];
            tab[i+j] = t;
		}
		j++;
	}
        i++;
    }
}
