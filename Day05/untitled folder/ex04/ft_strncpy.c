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

char *ft_strncpy(char *dest, char *src,  unsigned int n)
{
    unsigned int i;
    i=0;
    
    while (src[i]!='\0' && i<n)
    {dest[i]=src[i];
        i++;}
    while (i<n) {
    dest[i]='\0';
    i++;
    }
    return (dest);
}
