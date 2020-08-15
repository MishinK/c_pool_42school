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

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    i=0;
    while (s1[i]==s2[i] && s1[i] && s2[i] && i<n-1)
    {i++;}
    return (s1[i]-s2[i]);
}




int main()
{   char str1[]="123456789";
    char str2[]="123456789  ";
   
     printf("%d \n",  strncmp(str1,str2, 10));
    printf("%d \n",  ft_strncmp(str1,str2, 10));
    
    return (0);
}
