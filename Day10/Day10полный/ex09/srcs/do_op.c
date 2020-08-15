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
#include "../ft_opp.h"

int check_operator(char *operator)
{
    int i;
    int j;
    
    i = 0;
    while (g_opptab[i].operator)
    {
        j = 0;
        while (operator[j] && g_opptab[i].operator[j] && g_opptab[i].operator[j] == operator[j])
        {
            j++;
            if (operator[j] == '\0')
                return (i);
        }
        i++;
    }
    
    return (-1);
}

int do_operation(int a, int b, int operator)
{
    return((*g_opptab[operator].function)(a, b));
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
        (*g_opptab[5].function)(0, 0);
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

