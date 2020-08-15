
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



int ft_str_is_printable(char *str)
{
    int i;
    i=0;
    while(str[i])
    {
        if (str[i]>=32 && str[i]<127){
             if(str[i]== '\\' && str[i+1] != '\0' && (str[i+1] == '\'' || str[i+1] =='\"' || str[i+1] =='?'|| str[i+1] =='n'|| str[i+1] =='f' || str[i+1] =='r' || str[i+1] =='t' || str[i+1] =='v' || str[i+1] =='\x7F')){return (0);}
            i++;}
        else {return (0);}
        }
    return (1);
}
    
    
    
    
    int main()
{   char str1[]="5\x7f";
        
        
        printf("%s \n", ft_str_is_printable);
        
        
        return (0);
    }
