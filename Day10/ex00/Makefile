# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashea <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 11:05:35 by ashea             #+#    #+#              #
#    Updated: 2020/03/09 11:12:50 by ashea            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: libft

libft:
		gcc -Wall -Wextra -Werror -c ./srcs/ft_*.c -I includes/
		ar rc libft.a ft_*.o
		ranlib libft.a
clean:
		/bin/rm -f ft_*.o
fclean: clean
		/bin/rm -f libft.a
re:	fclean	all
