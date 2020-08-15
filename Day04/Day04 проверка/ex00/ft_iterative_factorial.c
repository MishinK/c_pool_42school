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

 int ft_iterative_factorial(int nb)
{
    if (nb<0)
    {
        return (0);
        
    }
    else
    {
    int n;
    
    n = 1;
    while (nb) {
        n *= nb--;
        }
        return (n);
}
}

int main()
    {
        int x;
        x = 0;
        printf("%d \n", x);
        printf("%d", ft_iterative_factorial(x));
        return (0);
    }

    
  
