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


int    ft_s(int sqrt, int nb)
{
    if (sqrt * sqrt == nb)
    {
        return (sqrt);
    }
    else
    {
        return (0);
    }
}

int    ft_sqrt(int nb)
{
    int sqrt;
    int i;
    
    if (nb > 0)
    {
        sqrt = nb;
        i = nb;
        while (1)
        {
            i = (nb / i + i) / 2;
            if (sqrt > i)
            {
                sqrt = i;
            }
            else
            {
                return (ft_s(sqrt, nb));
            }
        }
    }
    else
    {
        return (0);
    }
}

int main()
    {
        printf("%d \n", ft_sqrt(-4));
      printf("%d \n", ft_sqrt(20));
        printf("%d \n", ft_sqrt(9));
        printf("%d \n", ft_sqrt(16));
        return (0);
    }

    
  
