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

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    int size_src;
    size_src=0;
    while (src[size_src])
    {size_src++;}
    i=0;
    while (src[i] && i+1<size)
    {
    dest[i]=src[i];
        i++;
    }
    if(i!=0 ||size_src==0){dest[i]='\0';}
    return (size_src);
}

int main()
{   char str1[10]="dima";
    char str2[]="";
    char str3[10]="dima";
    char str4[]="";
    printf("%u \n", ft_strlcpy(str1, str2, 5));
    printf("%s \n", str1);
    printf("%lu \n", strlcpy(str3, str4, 5));
    printf("%s \n", str3);
    
    return (0);
}
