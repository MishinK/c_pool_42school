 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 10:50:57 by ashea             #+#    #+#             */
/*   Updated: 2020/02/29 10:51:17 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

 int ft_recursive_power(int nb, int power)
{   if (power<0){
    return (0);}
    else
    {
        if (power == 0)
    {return (1);}
        else return (nb*ft_recursive_power(nb, power-1));
    }
}

int main()
    {
        int x;
        int y;
        x = -2;
        y = 4;
        printf("%d \n", x);
        printf("%d", ft_recursive_power(x, y));
        return (0);
    }

    
  
