/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:51:51 by ashea             #+#    #+#             */
/*   Updated: 2020/03/09 21:02:58 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_H
# define OPERATOR_H

# include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_print(int n);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_sum(int a, int b);
int		ft_diff(int a, int b);
int		ft_multiply(int a, int b);
int		ft_division(int a, int b);
int		ft_mod(int a, int b);

#endif
