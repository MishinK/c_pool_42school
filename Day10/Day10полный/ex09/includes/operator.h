/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:51:51 by ashea             #+#    #+#             */
/*   Updated: 2020/03/09 14:51:53 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_H
# define OPERATOR_H

# include <unistd.h>

void    ft_putstr(char *str);
void    ft_putchar(char c);
void    ft_print(int n);
void    ft_putnbr(int nb);
int     ft_atoi(char *str);
int ft_add(int a, int b);
int ft_sub(int a, int b);
int ft_mul(int a, int b);
int ft_div(int a, int b);
int ft_mod(int a, int b);
int ft_usage(int a, int b);

typedef struct s_opp
{
    char *operator;
    int  (*function)(int, int);
}               t_opp;


#endif
