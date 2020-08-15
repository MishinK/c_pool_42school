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

 int ft_recursive_factorial(int nb)
{   if (nb>=0){
    if (nb <= 1)
    { return (1);}
    else
    {
    return (nb*ft_recursive_factorial(nb-1));
    }
} else
{return (0);}
}

int main()
    {
        int x;
        x = -1;
        printf("%d \n", x);
        printf("%d", ft_recursive_factorial(x));
        return (0);
    }

    
  
