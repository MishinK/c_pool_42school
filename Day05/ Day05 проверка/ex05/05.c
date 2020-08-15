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

 char *ft_strstr(char *str, char *to_find)
{
    int i;
    int l;
    i=0;
    
    if (to_find[0] == '\0')
        return (&str[0]);
    
    while(str[i]){
        l=0;
        while(str[i+l] && str[i+l] == to_find[l])
        {
            if (to_find[l+1] == '\0')
            return (&str[i]);
            l++;
            }
        i++;
    }
    return (0);
}


int main()
{   char str1[]="123456789";
    char str2[]="21";
    char *is;
   
    is = ft_strstr(str1,str2);
    
    printf("%s \n", is);
    
    
    
    return (0);
}
