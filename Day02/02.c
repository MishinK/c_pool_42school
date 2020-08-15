/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 23:05:11 by ashea             #+#    #+#             */
/*   Updated: 2020/02/26 23:05:19 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_print_numbers(void){
    int c='0';
    while (c<='9') {
        ft_putchar(c++);
    };
}
int main()
{
    ft_print_numbers();
    return (0);
}

