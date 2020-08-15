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

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i=0;
    while (src[i])
    {dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
    return (dest);
}

int main()
{   char str2[]="dima";
    char str1[]="zenkov";
    char str4[]="dima";
    char str3[]="zenkov";

    printf("%s \n", strcpy(str1, str2));
    printf("%s \n", ft_strcpy(str3, str4));
    
    return (0);
}
