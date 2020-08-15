/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 11:15:24 by ashea             #+#    #+#             */
/*   Updated: 2020/03/07 15:27:26 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    display(int    *clues[]);
int        resolve(int *clues[], int line, int column, int f_number);

//проверка на отсутсвие пустых клеток в первом массиве и на равенство массивовов друг удругу
int        compare(int *clues[], int *clues2[])
{
    int    line;
    int    column;
    
    line = 0;
    while (line < 9)
    {
        column = 0;
        while (column < 9)
        {
            if (clues[line][column] != clues2[line][column] ||
                clues[line][column] == 0)
                return (0);
            ++column;
        }
        ++line;
    }
    return (1);
}
// промежуточная функция в коце
void    end(int *clues[], int *clues2[])
{
    resolve(clues, 0, 0, 1);
    resolve(clues2, 0, 0, 9);
    if (compare(clues, clues2))
        display(clues);
    else
        write(1, "Error\n", 6);
}


