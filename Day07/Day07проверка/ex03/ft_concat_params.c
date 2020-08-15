/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:51:17 by ashea             #+#    #+#             */
/*   Updated: 2020/03/04 17:54:04 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_concat_params(int argc, char **argv)
{
    
        int i;
        int j;
        int n;
        char *str;
    
        str = malloc(sizeof(**argv));
        i = 0;
        n = 0;
        while (i < argc-1)
        {
            j = 0;
            while (argv[i+1][j])
            {
                str[n] = argv[i+1][j];
                j++;
                n++;
            }
            if (i<argc-2)
            {str[n] = '\n';}
            i++;
            n++;
        }
        return (str);
}

int    main(int argc, char **argv)
{
    char *str;
   str = ft_concat_params(argc, argv);
   printf("%s \n", str);
 return (0);
}

