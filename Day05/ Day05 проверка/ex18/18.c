
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



unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    int j;

    int size_dest=0;
    int size_src=0;
    i=0;
    j=0;
    
    
    size_dest=0;
    size_src=0;
    
    while(dest[size_dest]){size_dest++;}
    while(src[size_src]){size_src++;}
    

    i=size_dest;
    j=0;
    while(src[j] && i+j+1<size)
    {dest[i+j]=src[j];
        j++;
    }
    dest[i+j]='\0';
    
   if(size>=size_dest){
     return (size_src + size_dest);}
   else {
       return (size_src + size);
   }
}

    
    
    
    int main()
{   char str1[15]="dimas";
    char str2[]="zenkov11";
    char str3[15]="dimas";
    char str4[]="zenkov11";
        
        printf("%lu \n",  strlcat(str1, str2, 10));
     printf("%s \n",  str1);
        printf("%u \n",  ft_strlcat(str3, str4, 10));
       printf("%s \n",  str3);
        return (0);
    }
