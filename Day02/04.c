/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 23:27:28 by ashea             #+#    #+#             */
/*   Updated: 2020/02/26 23:27:45 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
void print(int x1, int x2, int x3){
    ft_putchar(x1 +'0'); ft_putchar(x2 +'0'); ft_putchar(x3 +'0');
    if(100*x1+10*x2+x3<789){ft_putchar(','); ft_putchar(' ');};
}


void ft_print_comb(void)
{
    int a;
    int b;
    int c;
    a=0;
    b=1;
    c=2;
    
    while(a<=7){
        while(b<=8){
            while(c<=9){
                if (a<b && b<c){print(a,b,c);}
                c++;
            }
            c=0;
            b++;
        }
        b=0;
        a++;
    };
}

int main()
{
    ft_print_comb();
    return (0);
}

