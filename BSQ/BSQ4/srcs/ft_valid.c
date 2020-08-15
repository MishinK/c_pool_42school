/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 15:43:41 by ashea             #+#    #+#             */
/*   Updated: 2020/03/15 15:43:53 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int ft_valid_map2(char *str, char *c, int *n_m, int **tab)
{
    int i;
    int j;
    int k;
    
    i = 0;
    k = 0;
    while (i < n_m[0])
    {
        j = 0;
        while (j < n_m[1])
            if (str[i * n_m[1] + j + k] == c[0])
                tab[i][j++] = 1;
            else if (str[i * n_m[1] + j + k] == c[1])
                tab[i][j++] = 0;
            else if (str[i * n_m[1] + j + k++] == '\n')
                continue ;
            else
                return (0);
        if (j != n_m[1] )
            return (0);
        i++;
    }
    if (str[i * n_m[1] +  k + 1] != '\0')
        return (0);
    return (1);
}


int **ft_create_tab(int *n_m)
{
    int  **tabs;
    int i;
    
    i = 0;
    tabs = (int**)malloc(sizeof(int) * n_m[0] * n_m[1]);
    if (tabs == NULL)
        return ((int**)NULL);
    while (i < n_m[0])
    {
        tabs[i] = (int*)malloc(sizeof(int) * n_m[1]);
        if (tabs[i] == NULL)
            return ((int**)NULL);
        i++;
    }
    return (tabs);
}


int ft_valid_map (char *str)
{
    int *n_m;
    char *c;
    
    c = (char*)malloc(sizeof(char)*4);
    if (c == NULL)
        return ((int)NULL);
    n_m = (int*)malloc(sizeof(int)*2);
    if (n_m == NULL)
        return ((int)NULL);
    n_m[0] = ft_atoi(str);
    if (n_m[0] <= 0)
        return (0);
    while (str[0] <= '9' && str[0] >= '0')
        str++;
    return(ft_valid_map3(str, c, n_m));
}

int ft_valid_map3 (char *str, char *c, int *n_m)
{
     int i;
     int **tab;
    
        i = 0;
    while (str[0] && str[0] != '\n')
    {
        if ( i < 3)
            c[i] = str[0];
        else
            return (0);
        i++;
        str++;
    }
    if (str[0])
        str++;
    n_m[1] = 0;
    while (str[n_m[1]] && str[n_m[1]] != '\n')
        n_m[1]++;
    tab = ft_create_tab(n_m);
    if(!ft_valid_map2(str, c, n_m, tab))
        return (0);
    ft_decision_map(tab, n_m, c);
    return(1);
}
