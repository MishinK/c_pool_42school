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

#include <stdio.h>
#include <stdlib.h>

int check_line(int *line)
{
	int i;
	int check;
	int j;

	
	check = 0;
	i = 1;
	while (i<=9)
	{	
		j = 0;
		while (j<=8)
		{
			if(line[j] == i)
				check = i;
				j++;
		}
	if (check == i)
		i++;
	else 
		break;
	}
	return (check == 9);
}	

int **trans(int **tab)
{
	int i;
	int j;
	int **Ttab;
    
    Ttab = (int**)malloc(sizeof(int)*10*10);
	i=0;
	while (i<=8)
	{
		j = 0;
        Ttab[i] = (int*)malloc(sizeof(int)*10);
		while (j<=8)
		{
			Ttab[i][j] = tab[j][i];
			j++;
		}
		i++;
	}
	return (Ttab);
}

int tri(int **tab)
{
	int i;
	int j;
	int *line;
    int itog3;

	line = (int*)malloc(sizeof(int)*10);
	i=0;
	j=0;
    itog3 = 1;
	while (i<=8)
	{
		j=0;
        while (j<=8)
        {
            line[0]=tab[i+0][j+0];
            line[1]=tab[i+1][j+0];
            line[2]=tab[i+2][j+0];
            line[3]=tab[i+0][j+1];
            line[4]=tab[i+1][j+1];
            line[5]=tab[i+2][j+1];
            line[6]=tab[i+0][j+2];
            line[7]=tab[i+1][j+2];
            line[8]=tab[i+2][j+2];
            itog3 = itog3*check_line(line);
            j = j+3;
        }
        i=i+3;
    }
    return(itog3);
}
	

int proverka_itog (int **tab)
{
	int i;
	int itog;

	i=0;
	itog = 1;
	while (i<=8)
	{
        itog = itog*check_line(tab[i])*check_line(trans(tab)[i]);
        itog = itog*tri(tab);
        i++;
    }
    return(itog);
}

void pechat(int **tab)
{
    int i;
    int j;
    i=0;
    while (i<=8)
    {
        j=0;
        while (j<=8) {
            printf("%d ", tab[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
}


void perebor(int **tab, int n)
{
    int i;
    int j;
    int k;
    i = 0;
    while( i<=8)
    {
        j=0;
        while( j<=8)
        {
          if (tab[i][j] == 0 )
          {
              //tab[i][j] = n;
              k = 1;
              while (k<=3)
              {
              tab[i][j] = k;
              perebor(tab, k);
                  k++;
              }
          }
            j++;
        }
        i++;
    }
    if(proverka_itog(tab)==1)
    {
        pechat(tab);
    }
    //else pechat(tab);
}




int main(int argc, char **argv)
{
	int **sudoky;
	int i;
	int j;
    int k;
    k=1;
	
	i = 1;
	sudoky = (int**)malloc(sizeof(int)*10*10);
	while (i<=9)
	{
		j=0;
		sudoky[i-1] = (int*)malloc(sizeof(int)*10);
		while (j<=8)
		{
			if (argv[i][j] == '.')
				sudoky[i-1][j] = 0;
			else
				sudoky[i-1][j] = argv[i][j] - '0';
			printf("%d ", sudoky[i-1][j]);
			j++;
		}
		printf("\n");
				i++;
	}
    printf("\n");
        perebor(sudoky, 0);
    

	return (0);
}


