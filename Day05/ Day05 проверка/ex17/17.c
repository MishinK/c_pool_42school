
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



char *ft_strncat(char *dest, char *src, int nb)
{
    int i;
    int j;
    
    i=0;
    j=0;
    while(dest[i]){i++;}
    while(src[j] && j < nb)
    {dest[i+j]=src[j];
        j++;
    }
    dest[i+j]='\0';
    return (dest);
}
    
    
    
    
    int main()
{   char str1[80]="dimas ";
    char str2[]="pidor";
        
        
        printf("%s \n",  strncat(str1, str2, 6));
        printf("%s \n",  ft_strncat(str1, str2, 6));
        return (0);
    }
