/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:21:57 by ashea             #+#    #+#             */
/*   Updated: 2020/03/09 21:07:02 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/operator.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int n)
{
	if (n < 10)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_print(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		ft_print(nb);
	}
	else
	{
		ft_putchar('-');
		if (nb == (-2147483648))
		{
			ft_putchar('2');
			ft_print(147483648);
		}
		else
		{
			ft_print(nb * (-1));
		}
	}
}
