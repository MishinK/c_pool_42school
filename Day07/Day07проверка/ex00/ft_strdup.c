/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 10:17:45 by ashea             #+#    #+#             */
/*   Updated: 2020/03/04 11:44:28 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	char *src2;

	i = 0;
	while (src[i])
		i++;
	src2 = malloc(i*sizeof(char));
	if (src2 == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		src2[i]=src[i];
		i++;
	}
	src2[i] = '\0';
	return (src2);
}
		


//int	main()
//{
//	char str[80]="this is a test";
//	char *p;
//	char str2[80]="this is a test";
//	char *p2;
//
//	p = strdup(str);
//	p2 = ft_strdup(str2);
//	printf("%s \n", p);
//	printf("%s \n", p2);
//	return (0);
//}
