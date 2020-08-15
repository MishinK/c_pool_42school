
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

char *ft_strupcase(char *str)
{
    int i;
    
    i=0;
    while(str[i])
    {
        if ( str[i]>='A' && str[i]<='Z')
        {str[i]=str[i]+'a'-'A';}
        i++;
        
    }
    return(str);
}


char *ft_strcapitalize(char *str)
{
    int i;
    str=ft_strupcase(str);
    i=0;
    if (str[i]>='a' && str[i]<='z'){str[i]=str[i]+'A'-'a';}
    while(str[i+1])
    {
        if((str[i+1]<='z' && str[i+1]>='a') && (str[i]>'z' || str[i]<'a') && (str[i]>'9' || str[i]<'0') && (str[i]>'Z' || str[i]<'A'))
    {str[i+1]=str[i+1]+'A'-'a';}
        i++;}
    
        return(str);
    
}
    
    
    
    
    int main()
    {   char str1[]="  dima pidor";
        
        
        printf("%s \n",  ft_strcapitalize(str1));
        
        
        return (0);
    }
