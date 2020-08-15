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




int main()
{
    printf("%d \n", ft_is_prime(0));
    printf("%d \n", ft_is_prime(1));
    printf("%d \n", ft_is_prime(2));
    printf("%d \n", ft_is_prime(-1));
    printf("%d \n", ft_is_prime(-2));
    printf("%d \n", ft_is_prime(11));
    printf("%d \n", ft_is_prime(23));
    return (0);
}
