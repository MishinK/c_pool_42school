/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:21:57 by ashea             #+#    #+#             */
/*   Updated: 2020/02/27 16:39:55 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strcmp(char *s1, char *s2)
{
    int i;
    i=0;
    while (s1[i] && s2[i])
    {   if (s1[i]!=s2[i]){return (s1[i]-s2[i]);}
        i++;}
    return (s1[i]-s2[i]);
}
