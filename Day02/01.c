/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:21:57 by ashea             #+#    #+#             */
/*   Updated: 2020/02/27 16:39:55 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void	ft_print_reverse_alphabet(void)
{
    char c;
    c = 'z';
    while ( c>= 'a')
   	{
        ft_putchar(c);
        c = c - 1;
    }
}

int		main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}
