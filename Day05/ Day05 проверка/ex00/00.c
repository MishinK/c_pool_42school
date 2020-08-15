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

void	ft_putstr(char *str)
{
    while (*str) {
        ft_putchar(*str);
        str++;    }
}

int		main(void)
{
    char s[]="oy main))";
    char *str;
    str=&s[0];
    ft_putstr(str);
    return (0);
}
