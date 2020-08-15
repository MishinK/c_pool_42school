/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 23:15:58 by ashea             #+#    #+#             */
/*   Updated: 2020/02/26 23:16:11 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
void ft_is_negative(int n){
    n<0 ? ft_putchar('N') : ft_putchar('P');
}

int main()
{
    ft_is_negative(1);
    ft_is_negative(100);
    ft_is_negative(-1);
    ft_is_negative(0);
    return (0);
}


