/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:12:45 by ashea             #+#    #+#             */
/*   Updated: 2020/03/09 20:43:10 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*t;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i + j])
		{
			if (ft_strcmp(tab[i], tab[i + j]) > 0)
			{
				t = tab[i];
				tab[i] = tab[i + j];
				tab[i + j] = t;
			}
			j++;
		}
		i++;
	}
}
