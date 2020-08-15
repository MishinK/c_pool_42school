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

int ft_max_scale(int **tab, int *n_m)
{
    int scale;
    int i;
    int j;
    
    scale = 0;
    i = 0;
    while (i < n_m[0])
    {
        j = 0;
        while (j < n_m[1])
        {
            if (i*j != 0)
            {
                if (tab[i][j] == 1)
                    tab[i][j] = ft_min(tab[i][j-1], tab[i-1][j], tab[i-1][j-1]) + 1;
                if (tab[i][j] > scale)
                    scale = tab[i][j];
            }
            j++;
        }
        i++;
    }
    return (scale);
}


void ft_decision_x_y (int **tab, int *n_m, int *x_y_scale)
{
    int i;
    int j;
    
    i = 0;
    while (i < n_m[0])
    {
        j = 0;
        while (j < n_m[1])
        {
            if (tab[i][j] == x_y_scale[2])
            {
                if (i + 1 <= x_y_scale[0] && j + 1 <= x_y_scale[1])
                {
                    x_y_scale[0] = i + 1;
                    x_y_scale[1] = j + 1;
                }
            }
            j++;
        }
        i++;
    }
}

void ft_print_decision_map2 (int **tab, int *n_m, char *c)
{
    int i;
    int j;
    int indikator;
    
    i = 0;
    indikator = 0;
    while (i < n_m[0])
    {
        j = 0;
        while (j < n_m[1])
        {
            if (tab[i][j] == 1 && indikator++ == 0)
                write(1, &c[2], 1);
            else if (tab[i][j] == 0)
                write(1, &c[1], 1);
            else
                write(1, &c[0], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

void ft_print_decision_map (int **tab, int *n_m, int *x_y_scale, char *c)
{
    int i;
    int j;
    
    i = 0;
    if (x_y_scale[2] > 0)
        while (i < n_m[0])
        {
            j = 0;
            while (j < n_m[1])
            {
                if ( i >= (x_y_scale[0] - x_y_scale[2]) && i < x_y_scale[0]
                    && j >= (x_y_scale[1]  - x_y_scale[2]) && j <  x_y_scale[1])
                    write(1, &c[2], 1);
                else if (tab[i][j] == 0)
                     write(1, &c[1], 1);
                else
                    write(1, &c[0], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    else
        ft_print_decision_map2 (tab, n_m, c);
}


void ft_decision_map(int **tab, int *n_m, char *c)
{
    int                  *x_y_scale;

    x_y_scale = (int*)malloc(sizeof(int)*3);
    if(x_y_scale == NULL)
        return ;
    x_y_scale[2] = ft_max_scale(tab, n_m);
    x_y_scale[0] = n_m[0];
    x_y_scale[1] = n_m[1];
    ft_decision_x_y(tab, n_m, x_y_scale);
    ft_print_decision_map(tab, n_m, x_y_scale, c);
}

