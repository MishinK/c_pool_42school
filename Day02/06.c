/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 11:31:19 by ashea             #+#    #+#             */
/*   Updated: 2020/02/27 11:31:43 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_print(int n){
    if(n<10){
        ft_putchar(n +'0');
    }
    else {
        ft_print(n / 10);
        ft_putchar(n % 10 +'0');
    }
}


void ft_putnbr(int nb)
{
    if(nb>=0){
    ft_print(nb);
    }
    else{
        ft_putchar('-');
         if (nb == (-2147483648))
         {   ft_putchar('2');
             ft_print(147483648);
         }
        ft_print(nb*(-1));
    }
}

int main()
{
    ft_putnbr(217483647);
    return (0);
}

