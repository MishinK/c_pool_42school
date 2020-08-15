
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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    unsigned int size_dest=0;
    unsigned int size_src=0;
    i=0;
    j=0;
    
    
    size_dest=0;
    size_src=0;
    
    while(dest[size_dest]){size_dest++;}
    while(src[size_src]){size_src++;}
    

    i=size_dest;
    j=0;
    while(src[j] && i+j+1<size)
    {dest[i+j]=src[j];
        j++;
    }
    dest[i+j]='\0';
    
   if(size>=size_dest){
     return (size_src + size_dest);}
   else {
       return (size_src + size);
   }
}

    
