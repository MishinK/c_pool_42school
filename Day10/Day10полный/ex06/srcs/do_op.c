/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:44:46 by ashea             #+#    #+#             */
/*   Updated: 2020/03/09 11:52:19 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/operator.h"

int check_operator(char *operator)
{
    if (operator[1])
        return (-1);
    if (operator[0] == '+')
        return (0);
    if (operator[0] == '-')
        return (1);
    if (operator[0] == '*')
        return (2);
    if (operator[0] == '/')
        return (3);
    if (operator[0] == '%')
        return (4);
    return (-1);

}

int do_operation(int a, int b, int operator)
{
    int     (*operations[5])(int, int);
    
    operations[0] = &ft_sum;
    operations[1] = &ft_diff;
    operations[2] = &ft_multiply;
    operations[3] = &ft_division;
    operations[4] = &ft_mod;
    return ((*operations[operator])(a,b));
}

int main (int argc, char **argv)
{
    int    result;
    int    operator;
    
    if (argc != 4)
        return (0);
    operator = check_operator(argv[2]);
    if (operator == -1)
    {
        ft_putstr("0\n");
        return (0);
    }
    else if (operator == 3 && ft_atoi(argv[3]) == 0)
    {
        ft_putstr("Stop : division by zero\n");
        return (0);
    }
    else if (operator == 4 && ft_atoi(argv[3]) == 0)
    {
        ft_putstr("Stop : modulo by zero\n");
        return (0);
    }
    result = do_operation(ft_atoi(argv[1]), ft_atoi(argv[3]), operator);
    ft_putnbr(result);
    ft_putchar('\n');
    return (0);
        return(0);
}

