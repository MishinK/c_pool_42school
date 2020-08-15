/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:21:57 by ashea             #+#    #+#             */
/*   Updated: 2020/03/03 14:52:38 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int l;

	i = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[i])
	{
		l = 0;
		while (str[i + l] && str[i + l] == to_find[l])
		{
			if (to_find[l + 1] == '\0')
				return (&str[i]);
			l++;
		}
		i++;
	}
	return (0);
}
