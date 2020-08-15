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


 int ft_fibonacci(int index)
{   if (index<0){
    return (-1);}
    else
    {
        int f0;
        int f1;
        int i;
        
        f0 = 0;
        f1 = 1;
        while (index)
        {   i = f1;
            f1 = f1 + f0;
            f0 = i;
            index--;
        }
        return (f0);
    }
}

int main()
    {
        printf("%d \n", ft_fibonacci(-100));
        printf("%d \n", ft_fibonacci(0));
         printf("%d \n", ft_fibonacci(1));
         printf("%d \n", ft_fibonacci(2));
         printf("%d \n", ft_fibonacci(3));
        printf("%d \n", ft_fibonacci(4));
        printf("%d \n", ft_fibonacci(5));
        return (0);
    }

    
  
