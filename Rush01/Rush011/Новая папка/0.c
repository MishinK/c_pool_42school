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

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int        compare(int *clues[], int *clues2[]);
void    end(int *clues[], int *clues2[]);
// печатает таблицу
void    display(int *clues[])
{
    int line;
    int    column;
    int    value;
    
    line = 0;
    while (line < 9)
    {
        column = 0;
        while (column < 9)
        {
            value = clues[line][column] + 48;
            write(1, &value, 1);
            if (column + 1 < 9)
                write(1, " ", 1);
            ++column;
        }
        write(1, "\n", 1);
        ++line;
    }
}
//перепись из аргументов таблицы в матрицу исходных
void    parse_clues(char *argv[], int *clues[])
{
    int        line;
    int        column;
    
    line = 1;
    while (line <= 9)
    {
        column = 0;
        while (argv[line][column])
        {
            if (argv[line][column] > '0' && argv[line][column] <= '9')
                clues[line - 1][column] = argv[line][column] - 48;
            else
                clues[line - 1][column] = 0;
            ++column;
        }
        ++line;
    }
}

// проверка отсутсвия заданного номера в заданной колонке, линии, квадранте их пересечения
int        check(int *clues[], int line, int column, int number)
{
    int    i;
    int    j;
    int    last_square_line;
    int    last_square_column;
    
    i = -1;
    while (++i < 9)
        if (clues[i][column] == number)
            return (0);
    i = -1;
    while (++i < 9)
        if (clues[line][i] == number)
            return (0);
    last_square_line = (line / 3 + 1) * 3 - 1;
    last_square_column = (column / 3 + 1) * 3 - 1;
    i = -1;
    while (++i < 3)
    {
        j = -1;
        while (++j < 3)
            if (clues[last_square_line - i][last_square_column - j] == number)
                return (0);
    }
    return (1);
}
// измение таблицы рукурсивно
int        resolve(int *clues[], int line, int column, int f_number)
{
    int number;
    
    number = f_number;
    if (column >= 8 && line >= 8)    //если таблица кончилась
        return (1);
    if (column > 8 && ++line)        //если на крайнем столбике но не линии обнуляем столбец переходим нас ледующую линиию
        column = 0;
    if (clues[line][column] != 0)   // если аргумент не нулевой
        return (resolve(clues, line, column + 1, f_number)); //увеличиваем колонку
    // таким образом найдем 0 вой элеменет
    while ((f_number == 1 && number <= 9) || (f_number == 9 && number >= 1))
    {
        if (check(clues, line, column, number))
        {
            clues[line][column] = number;  //вставили номер если его там не хватало
            if ((line == 8 && column == 8) ||
                resolve(clues, line, column + 1, f_number)) // если кончилась таблица или успешно заполнили таблицу
                return (1);
        }
        if (f_number == 9)
            --number;
        else
            ++number;
    }
    return (clues[line][column] = 0);
}

int        main(int argc, char **argv)
{
    int    **clues;
    int    **clues2;
    int    i;
    
    
    clues = malloc(sizeof(int*) * 9);
    clues2 = malloc(sizeof(int*) * 9);
    i = 0;
    while (i < 9)
    {
        clues[i] = malloc(sizeof(int) * 9);
        clues2[i] = malloc(sizeof(int) * 9);
        i++;
    }
    if (argc != 10)
    {
        write(1, "Error\n", 6);
        return (0);
    }
    parse_clues(argv, clues);
    resolve(clues, 0, 0, 1);
    parse_clues(argv, clues2);
    end(clues, clues2);
    return (0);
}
