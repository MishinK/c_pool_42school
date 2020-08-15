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

void ft_read_file(int argc, char **argv, char *str)
{
    int i;
    int j;
    char  c;
    int   ft;
    
    j = 1;
    while (j < argc)
    {
        ft = open(argv[j], O_RDONLY);
        j++;
        if (ft == -1)
        {
            write(2, "map error\n", 10);
            continue ;
        }
        i = 0;
        while (read(ft, &c, 1))
        {
            write(1, &c, 1);
            str[i++] = c;
        }
        str[i] = '\0';
        close(ft);
        if (ft_valid_map(str) == 0)
            write(2, "map error\n", 10);
    }
}

void ft_read_standard_input(char *str)
{
    int i;
    char c;
    
    i = 0;
    while (read(0, &c, 1))
        str[i++] = c;
    str[i] = '\0';
    if (ft_valid_map(str) == 0)
        write(2, "map error\n", 10);
}


int main(int argc, char **argv)
{
    char                 *str;

    str = (char*)malloc(sizeof(char) * BUF);
    if (str == NULL)
        return ((int)NULL);
    if (argc > 1)
        ft_read_file(argc, argv, str);
    else
        ft_read_standard_input(str);
    return (0);
}

