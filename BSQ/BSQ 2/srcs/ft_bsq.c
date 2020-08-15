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

int **ft_transfer_tab(char *str, int n , int m, char *c)
{
    int i;
    int j;
    int k;
    int **tab;
    
    i = 0;
    k = 0;
    tab = (int**)malloc(sizeof(int) * n * m);
    while (i < n)
    {
        j = 0;
        tab[i] = (int*)malloc(sizeof(int) * m);
        while (j < m)
        {
            if (str[i * m + j + k] == c[0])
                tab[i][j] = 1;
            else if (str[i * m + j + k] == c[1])
                tab[i][j] = 0;
            else if (str[i * m + j + k] == '\n')
                k++;
            j++;
        }
        i++;
    }
    return(tab);
}

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

void ft_decision_x_y (int **tab, int n, int m, int *x_y_scale)
{
    int i;
    int j;
    
    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            if (tab[i][j] == x_y_scale[2] )
            {
                if (i < x_y_scale[0])
                    x_y_scale[0] = i;
                if (j < x_y_scale[1])
                    x_y_scale[1] = j;
            }
            j++;
        }
        i++;
    }
}

void ft_print_decision_map (int **tab, int n, int m, int *x_y_scale, char *c)
{
    int i;
    int j;
    
    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            if ( i >= (x_y_scale[0] + 1 - x_y_scale[2]) && i <= x_y_scale[0] && j>= (x_y_scale[1] + 1 - x_y_scale[2]) && j <= x_y_scale[1] )
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



void ft_decision_map(char *str)
{
    int                 **tab;
    char                 *c;
    int                  *n_m;
    int                  i;
    int                  *x_y_scale;

    c = (char*)malloc(sizeof(char)*4);
    n_m = (int*)malloc(sizeof(int)*2);
    n_m[0] = ft_atoi(str);
    i = 0;
    while (str[i] <= '9' && str[i] >= '0')
        str++;
    c[0] = str[0];
    c[1] = str[1];
    c[2] = str[2];
    str = str + 4;
    
    n_m[1] = how_much_cols(str);
    
    printf("n = %d\n", n_m[0]);
    printf("m = %d\n", n_m[1]);
    
    tab = ft_transfer_tab(str, n_m[0], n_m[1], c);
    
    x_y_scale = (int*)malloc(sizeof(int)*3);
    
    x_y_scale[2] = ft_max_scale(tab, n_m[0], n_m[1]);
    
    printf("side = %d\n", x_y_scale[2]);
    ft_print_tab(tab, n_m[0], n_m[1]);
    
    
    x_y_scale[0] = n_m[0];
    x_y_scale[1] = n_m[1];
   
    ft_decision_x_y(tab, n_m[0], n_m[1], x_y_scale);
    printf("x = %d, y = %d\n", x_y_scale[0], x_y_scale[1]);
    
    ft_print_decision_map(tab, n_m[0], n_m[1], x_y_scale, c);
}

int ft_valid_map (char *str)
{
    char *str_check;
    int *n_m;
    char *c;
    int i;
    int j;
    int k;
    int       **tab;
    str_check = str;
   
    c = (char*)malloc(sizeof(char)*4);
    n_m = (int*)malloc(sizeof(int)*2);
    n_m[0] = ft_atoi(str_check);
    printf("n = %d\n", n_m[0]);
    if (n_m[0] <= 0)
        return (0);
    while (str_check[0] <= '9' && str_check[0] >= '0')
        str_check++;
    i = 0;
    while (str_check[0] && str_check[0] != '\n')
    {
        if ( i < 3)
            c[i] = str_check[0];
        else
            return (0);
        i++;
        str_check++;
    }
    str_check++;
    
    n_m[1] = 0;
    while (str_check[n_m[1]] && str_check[n_m[1]] != '\n')
        n_m[1]++;
    printf("m = %d\n", n_m[1]);
    
    i = 0;
    j = 0;
    k = 0;
    tab = (int**)malloc(sizeof(int) * n_m[0] * n_m[1]);
    while (i < n_m[0])
    {
        j = 0;
        tab[i] = (int*)malloc(sizeof(int) * n_m[1]);
        while (j < n_m[1])
        {
            if (str[i * n_m[1] + j + k] == c[0])
                tab[i][j] = 1;
            else if (str[i * n_m[1] + j + k] == c[1])
                tab[i][j] = 0;
            if (str_check[i * n_m[1] + j + k] == '\n')
                k++;
            if (str_check[i * n_m[1] + j + k] != c[0] && str_check[i * n_m[1] + j + k] != c[1])
                return (0);
            j++;
        }
        if (j != n_m[1])
            return (0);
        i++;
    }
    if (str_check[n_m[0] * (n_m[1] + 1) + 1] != '\0')
        return (0);
    // таблица готова решаем дальше
    
    
    int                  *x_y_scale;
    x_y_scale = (int*)malloc(sizeof(int)*3);
    
    x_y_scale[2] = ft_max_scale(tab, n_m[0], n_m[1]);
    
    printf("side = %d\n", x_y_scale[2]);
    ft_print_tab(tab, n_m[0], n_m[1]);
    
    
    x_y_scale[0] = n_m[0];
    x_y_scale[1] = n_m[1];
    
    ft_decision_x_y(tab, n_m[0], n_m[1], x_y_scale);
    printf("x = %d, y = %d\n", x_y_scale[0], x_y_scale[1]);
    
    ft_print_decision_map(tab, n_m[0], n_m[1], x_y_scale, c);
    
    return (1);
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
        
        
        
 //       if (ft_valid_map(str) == 1)
            ft_valid_map(str);
//        else
//            printf("error\n");
        //ft_decision_map(str);
    }
    return (0);
}
