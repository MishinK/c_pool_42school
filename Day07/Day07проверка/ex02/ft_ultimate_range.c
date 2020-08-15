/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:48:20 by ashea             #+#    #+#             */
/*   Updated: 2020/03/04 12:33:19 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

 int ft_ultimate_range(int **range, int min, int max)
{
	int *min_max;
	int i;

    if (max <= min)
        min_max = NULL;
	else
        min_max = malloc((max-min)*sizeof(int));
    i = 0;
	while (min < max)
	{
		min_max[i] = min;
		i++;
		min++;
	}
    *range=min_max;
	return (i);
}

//int    main()
 //   {
    //    int **p;
   //     int i = 200;
   //     int j = 210;
   //     int k=0;
        
   //     ft_ultimate_range (p, i, j);
    //    while (i<j){
   //         printf("%d \n", p[0][j-i-1]);
   //         i++;}
   //
   //     return (0);
   // }

