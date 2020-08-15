/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 11:31:10 by ashea             #+#    #+#             */
/*   Updated: 2020/03/16 11:36:43 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int    ft_atoi(char *str)
{
	int i;
	int n;
	int s;
	
	i = 0;
	n = 0;
	s = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
	{
		n = n * 10 + (str[i] - '0') * s;
		i++;
	}
	return (n);
}

int    ft_min(int i, int j, int k)
{
	if (i >= k && j >= k)
		return (k);
	else if (j >= i && k >= i)
		return (i);
	else if (i >= j && k >= j)
		return (j);
	return (0);
}

int		how_much_rows(char *str)
{
	int        rows;
	
	rows = 0;
	while (*str)
	{
		if (*str == '\n')
			rows++;
		str++;
	}
	return (rows);
}

int        how_much_cols(char *str)
{
	int        cols;
	
	cols = 0;
	while (*str != '\n' && *str)
	{
		cols++;
		str++;
	}
	return (cols);
}
