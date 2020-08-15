/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:57:42 by ashea             #+#    #+#             */
/*   Updated: 2020/02/28 10:57:47 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int        ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int ft_strlen(char *str)
{
    int strlen;
    
    strlen = 0;
    while(*str != '\0'){
        str++;
        strlen++;
    }
    return (strlen);
}

int main(void)
{
    int x;
    
    x = ft_strlen("1234 6789");
    ft_putchar(x + '0');
    
    return (0);
}
