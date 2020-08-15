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

char *ft_strncpy(char *dest, char *src,  unsigned int n)
{
    unsigned int i;
    i=0;
    
    while (src[i]!='\0' && i<n)
    {dest[i]=src[i];
        i++;}
    while (i<n) {
    dest[i]='\0';
    i++;
    }
    return (dest);
}

int main()
{   char dest[]="12";
    char *dst;
    dst = &dest[0];
    ft_strncpy(dst, "abc", 2);
    
    printf("%s \n", dest);
    
    
    
    return (0);
}
