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

 void ft_putstr(char *str)
{
    while(*str != '\0'){
        ft_putchar(*str);
        str++;
    }
}

int main(void)
{
    ft_putstr("Hello World");

    return (0);
}
