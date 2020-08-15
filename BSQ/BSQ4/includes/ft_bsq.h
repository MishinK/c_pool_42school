/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 11:28:12 by ashea             #+#    #+#             */
/*   Updated: 2020/03/16 11:30:25 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H
# define BUF 99999999999999
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

int    ft_atoi(char *str);
int    ft_min(int i, int j, int k);
int        how_much_rows(char *str);
int        how_much_cols(char *str);
int     ft_max_scale(int **tab, int *n_m);
void    ft_print_tab(int **tab, int n, int m);
void    ft_decision_x_y (int **tab, int *n_m, int *x_y_scale);
void    ft_print_decision_map (int **tab, int *n_m, int *x_y_scale, char *c);
void    ft_print_decision_map2 (int **tab, int *n_m, char *c);
void    ft_decision_map(int **tab, int *n_m, char *c);

int     ft_valid_map (char *str);
int ft_valid_map3 (char *str, char *c, int *n_m);
int ft_valid_map2(char *str, char *c, int *n_m, int **tab);
int **ft_create_tab(int *n_m);

#endif
