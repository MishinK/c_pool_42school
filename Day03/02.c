/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:57:42 by ashea             #+#    #+#             */
/*   Updated: 2020/02/28 10:57:47 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int        ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_swap(int *a, int *b)
{
    int i;
    
    i = *a;
    *a = *b;
    *b = i;
    
}

int main(void)
{
    
    int x;
    int y;
    x=1;
    y=8;
    ft_putchar(x+'0');
    ft_putchar(' ');
    ft_putchar(y+'0');
    ft_putchar(' ');
    ft_swap( &x, &y);
    ft_putchar(x+'0');
    ft_putchar(' ');
    ft_putchar(y+'0');
    return (0);
}
