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

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int    ft_atoi(char *str)
{
    int i;
    int n;
    int s;
    
    i = 0;
    n = 0;
    s = 1;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            s = -1;
        i++;
    }
    while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
    {
        n = n * 10 + (str[i] - '0') * s;
        i++;
    }
    return (n);
}

int    ft_min(int i, int j, int k)
{
    if (i >= k && j >= k)
        return (k);
    else if (j >= i && k >= i)
        return (i);
    else if (i >= j && k >= j)
        return (j);
    return (0);
}
int        how_much_rows(char *str)
{
    int        rows;
    
    rows = 0;
    while (*str)
    {
        if (*str == '\n')
            rows++;
        str++;
    }
    return (rows);
}

int        how_much_cols(char *str)
{
    int        cols;
    
    cols = 0;
    while (*str != '\n' && *str)
    {
        cols++;
        str++;
    }
    return (cols);
}

int main(int argc, char **argv)
{
    int **tab;
    int i;
    int j;
    int n;
    int m;
    int k;
    char  *str;
    long long unsigned        ii;
    char                    c;
    int side;
    
    ii = 0;
    str = (char*)malloc(sizeof(char) * 99999999);
    if (str == NULL)
        return (-1);
    while (read(0, &c, 1))
    {
        write(1, &c, 1);
        str[ii++] = c;
    }
    str[ii] = '\0';
    
    
    
    
    char c1;
    char c2;
    char c3;
    int n1;
    
    n1 = ft_atoi(str);
    i = 0;
    while (str[i] <= '9' && str[i] >= '0')
        str++;
    c1 = str[0];
    c2 = str[1];
    c3 = str[2];
    str = str + 4;
    
    n = how_much_rows(str);
    printf("n = %d\n", n);
    m = how_much_cols(str);
    printf("m = %d\n", m);
    tab = (int**)malloc(sizeof(int) * n * m);
    i = 0;
    j = 0;
    k = 0;
    while (i < n)
    {
        j = 0;
        tab[i] = (int*)malloc(sizeof(int) * m);
        while (j < m)
        {
            if (str[i * m + j + k] == c1)
                tab[i][j] = 1;
            
            else if (str[i * m + j + k] == c2)
                tab[i][j] = 0;
            else if (str[i * m + j + k] == '\n')
            {
                k++;
                printf("\n");
                continue ;
            }
            printf("%d ", tab[i][j]);
            j++;
        }
        i++;
    }
    printf("\n");
    

    side = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if (i*j == 0) continue;
            if(tab[i][j] == 1) tab[i][j] = ft_min(tab[i][j-1], tab[i-1][j], tab[i-1][j-1]) + 1;
            if (tab[i][j]>side) side=tab[i][j];
        }
    }
    
    printf("side: %d\n", side);

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
    
    int x;
    int y;
    i = 0;
    
    x = n;
    y = m;
    
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            if (tab[i][j] == side )
            {
                if (i < x)
                    x = i;
                if (j < y)
                    y = j;
            }
            j++;
        }
        i++;
    }
    printf("x = %d, y = %d\n", x, y);
    
    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            if ( i >= (x + 1 - side) && i <= x && j>= (y + 1 - side) && j <= y )
                printf("%c ", c3);
            else if (tab[i][j] == 0)
                printf("%c ", c2);
            else
                printf("%c ", c1);
            j++;
        }
        printf("\n");
        i++;
    }
    return (0);
}

// echo "...........................\n....o......................\n............o..............\n...........................\n....o......................\n...............o...........\n...........................\n......o..............o.....\n..o.......o................\n" | ./a.out
