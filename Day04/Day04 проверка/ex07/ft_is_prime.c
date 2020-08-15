#include <stdio.h>/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 14:39:03 by ashea             #+#    #+#             */
/*   Updated: 2020/02/29 14:39:06 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_is_prime(int nb)
{
    int i = 2;
    while (i <= nb/2){
        if (nb % i !=0 )
        {i++; }
        else { return (0); break;}
    }
    if(nb>1){ return (1);}
    else {return(0);}
}

int ft_find_next_prime(int nb)
{
    int n;
    int i;
    i = ft_is_prime(nb);
    n = nb;
    while (i!=1) {
        n = n+1;
        i = ft_is_prime(n);
    }
    return(n);
}


int main()
{
    printf("%d \n", ft_find_next_prime(50000017));
    return (0);
}
