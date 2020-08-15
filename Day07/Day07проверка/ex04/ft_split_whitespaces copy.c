/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 20:13:52 by ashea             #+#    #+#             */
/*   Updated: 2020/03/04 20:15:01 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char **ft_split_whitespaces(char **words,char *str)
{
    int i;
    int j;
    int n;

    i=0;
    j=0;
    n=0;
    words = (char**)malloc(sizeof(char)*10000000);

    while(str[n])
    {
        
        if(str[n]==' ' || str[n]=='\n' || str[n]=='\t' || str[n]=='\v')
        {
      words[i][j]='\0';
            if(j>0)
            {i++;}
            j=0;
        }
        else
        {
     //words[i][j]=str[n];
            j++;
        }
        n++;
    }
    return (words);
}

//char **ft_split_whitespaces(char *str)


int main()
{
    char *s="Dima Pidor vse znayt";
    char **words1;
    words1 = (char**)malloc(sizeof(char)*10000000);
    words1 = ft_split_whitespaces(words1, s);
  // printf("%c \n", words1[3][1]);
}
