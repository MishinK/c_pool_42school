/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 11:08:40 by ashea             #+#    #+#             */
/*   Updated: 2020/02/27 11:08:54 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
void print(int x1, int x2, int x3, int x4){
    ft_putchar(x1 +'0'); ft_putchar(x2 +'0'); ft_putchar(' '); ft_putchar(x3 +'0'); ft_putchar(x4 +'0');
    if(10*x1+x2<98){ft_putchar(','); ft_putchar(' ');};
}


void ft_print_comb2(void)
{
    
    int a;
    int b;
    int c;
    int d;
    
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    
    while (a <= 9)
    {
        while (b <= 9)
        {
             while (c <= 9)
             {
                  while (d <= 9)
                  {
                      if (10*a+b<10*c+d) print(a,b,c,d);
                      d++;
                  }
                 c++;
                 d = 0;
             }
            b++;
            c = 0;
        }
        a++;
        b = 0;
    }
}

int main()
{
    ft_print_comb2();
    return (0);
}


