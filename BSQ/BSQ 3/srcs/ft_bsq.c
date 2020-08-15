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

//научиться обрабатытвать случаи 1*m n*1

/*
int ft_max_scale(int **tab, int n, int m)
{
    int side;
    int i;
    int j;
    
    side = 0;
    i = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if (i*j == 0) continue;
            if(tab[i][j] == 1) tab[i][j] = ft_min(tab[i][j-1], tab[i-1][j], tab[i-1][j-1]) + 1;
            if (tab[i][j]>side) side=tab[i][j];
        }
    }
    return (side);
}

 */
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

void ft_print_tab(int **tab, int n, int m)
{
    int i;
    int j;

    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < m) {
            printf("%d ", tab[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

void ft_decision_x_y (int **tab, int *n_m, int *x_y, int scale)
{
    int i;
    int j;
    
    i = 0;
    while (i < n_m[0])
    {
        j = 0;
        while (j < n_m[1])
        {
            if (tab[i][j] == scale )
            {
                if (i + 1 <= x_y[0] && j + 1 <= x_y[1])
                {
                    x_y[0] = i + 1;
                    x_y[1] = j + 1;
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
            if (tab[i][j] == 1 && indikator == 0)
            {
                printf("%c ", c[2]);
                indikator = 1;
            }
            else if (tab[i][j] == 0)
                printf("%c ", c[1]);
            else
                printf("%c ", c[0]);
            j++;
        }
        printf("\n");
        i++;
    }
}

void ft_print_decision_map (int **tab, int *n_m, int *x_y, int scale, char *c)
{
    int i;
    int j;
    
    i = 0;
    if (scale > 0)
    {
        while (i < n_m[0])
        {
            j = 0;
            while (j < n_m[1])
            {
                if ( i >= (x_y[0]  - scale) && i < x_y[0] && j >= (x_y[1]  - scale) && j < x_y[1] )
                    printf("%c ", c[2]);
                else if (tab[i][j] == 0)
                    printf("%c ", c[1]);
                else
                    printf("%c ", c[0]);
                j++;
            }
            printf("\n");
            i++;
        }
    }
    else
        ft_print_decision_map2 (tab, n_m, c);
}


void ft_decision_map(int **tab, int *n_m, char *c)
{
    int                  *x_y;
    int                  scale;

    x_y = (int*)malloc(sizeof(int)*2);
    
    scale = ft_max_scale(tab, n_m);
    
    printf("side = %d\n", scale);
    ft_print_tab(tab, n_m[0], n_m[1]);
    
    x_y[0] = n_m[0];
    x_y[1] = n_m[1];
   
    ft_decision_x_y(tab, n_m, x_y, scale);
    printf("x = %d, y = %d\n", x_y[0], x_y[1]);
    
    ft_print_decision_map(tab, n_m, x_y, scale, c);
}

int ft_valid_map2(char *str, char *c, int *n_m)
{
    int  **tab;
    int i;
    int j;
    int k;
    
    i = 0;
    k = 0;
    tab = (int**)malloc(sizeof(int) * n_m[0] * n_m[1]);
    while (i < n_m[0])
    {
        j = 0;
        tab[i] = (int*)malloc(sizeof(int) * n_m[1]);
        while (j < n_m[1])
        {
            if (str[i * n_m[1] + j + k] != c[0] && str[i * n_m[1] + j + k] != c[1] && str[i * n_m[1] + j + k] != '\n')
                return (0);
            if (str[i * n_m[1] + j + k] == c[0])
                tab[i][j] = 1;
            else if (str[i * n_m[1] + j + k] == c[1])
                tab[i][j] = 0;
            else if (str[i * n_m[1] + j + k] == '\n')
            {
                k++;
                continue ;
            }
            j++;
        }
        if (j != n_m[1])
            return (0);
        i++;
    }
    if (str[n_m[0] * (n_m[1] + 1) + 1] != '\0')
        return (0);
    ft_print_tab(tab, n_m[0], n_m[1]);
   
    ft_decision_map(tab, n_m, c);
    return (1);
}

int ft_valid_map (char *str)
{
    int *n_m;
    char *c;
    int i;
  
    c = (char*)malloc(sizeof(char)*4);
    n_m = (int*)malloc(sizeof(int)*2);
    n_m[0] = ft_atoi(str);
    printf("n = %d\n", n_m[0]);
    if (n_m[0] <= 0)
        return (0);
    while (str[0] <= '9' && str[0] >= '0')
        str++;
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
    
    printf("m = %d\n", n_m[1]);
    printf("c1 = %c\n", c[0]);
    printf("c2 = %c\n", c[1]);
    printf("c3 = %c\n", c[2]);
    printf("str_chek = \n%s", str);
    
    return(ft_valid_map2(str, c, n_m));
}
    
    


int main(int argc, char **argv)
{
    char                 *str;
    long long unsigned   ii;
    int                  ft;
    int                  jj;
    char                 c;
    
    jj = 1;
    while (jj < argc)
    {
        ft = open(argv[jj], O_RDONLY);
        jj++;
        str = (char*)malloc(sizeof(char) * 99999999);
        if (str == NULL)
            return (-1);
        ii = 0;
        while (read(ft, &c, 1))
        {
            write(1, &c, 1);
            str[ii++] = c;
        }
        str[ii] = '\0';
        close(ft);
        
        if (ft_valid_map(str) == 0)
             printf("error\n");
    }
    return (0);
}
