
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

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 'a' - 'A';
        i++;
    }
    return (str);
}

char *ft_strcapitalize(char *str)
{
    int i;

    str = ft_strlowcase(str);
    i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] + 'A' - 'a';
    while (str[i + 1])
    {
        if ((str[i + 1] <= 'z' && str[i + 1] >= 'a') && (str[i] > 'z' || str[i] < 'a') && (str[i] > '9' || str[i] < '0') && (str[i] > 'Z' || str[i] < 'A'))
            str[i + 1] = str[i + 1] + 'A' - 'a';
        i++;
        }
        return (str);
}