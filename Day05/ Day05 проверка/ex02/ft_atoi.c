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
#include <stdio.h>
#include <stdlib.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int ft_atoi(char *str){

    int i;
    int n;
    int s;
    
    i=0;
    n=0;
    s=1;
    
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {   i++;
    }
        if (str[i] == '-')
        {
            s=-1;
            i++;
        }
   
    while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
    {
        n = n*10 + (str[i] - '0')*s;
 
        i++;
           }
           return (n);
}

int main()
{   printf("%d \n", ft_atoi("  -214748364  21"));
     printf("%d \n", atoi("  -214748364  21"));
   
    return (0);
}
