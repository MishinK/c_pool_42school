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
int    ft_putnbr(int nb);
void    ft_putchar(char c);

int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
    int *f_tab;

	i = 0;
    if (length<1)
        return(NULL);
    f_tab = (int *)malloc(sizeof(int)*length);
	while(i < length)
	{
		f_tab[i] = f(tab[i]);
		i++;
	}
    return (f_tab);
}

int main()
{
    int test1[] = {1,2,3,4,5};
    int* res = ft_map(test1, 5, &ft_putnbr);
    for (int i = 0; i < 5; i++)
        printf("%d,", res[i]);
    printf("\n");
    free(res);
    int test2[] = {-25,0,20,45};
    res = ft_map(test2, 3, &ft_putnbr);
    for (int i = 0; i < 3; i++)
        printf("%d,", res[i]);
    printf("\n");
    free(res);
    int test3[] = {5};
    res = ft_map(test3, 0, &ft_putnbr);
    for (int i = 0; i < 0; i++)
        printf("%d,", res[i]);
    printf("\n");
    free(res);
}

