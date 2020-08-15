/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:44:46 by ashea             #+#    #+#             */
/*   Updated: 2020/03/09 11:52:19 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void    ft_putnbr(int nb);
void    ft_putchar(char c);

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while(i < length)
	{
		f(tab[i]);
        ft_putchar(' ');
		i++;
	}
}

int main()
{
    int test1[] = {1,2,3,4,5};
    int test2[] = {-25,0,20,45};
    int test3[] = {5};
    
    ft_foreach(test1, 5, &ft_putnbr);
    printf("\n");
    ft_foreach(test2, 3, &ft_putnbr);
    printf("\n");
    ft_foreach(test3, 0, &ft_putnbr);
    printf("\n");
}

