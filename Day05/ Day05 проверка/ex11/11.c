
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
#include <string.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}



int ft_str_is_alpha(char *str)
{
    int i;
    i=0;
    while(str[i])
    {
        if ((str[i]>='a' && str[i]<='z') ||(str[i]>='A' && str[i]<='Z')){i++;}
        else {return (0);}
        }
    return (1);
}
    
    
    
    
    int main()
    {   char str1[]="";
        
        
        printf("%d \n",  ft_str_is_alpha(str1));
        
        
        return (0);
    }
