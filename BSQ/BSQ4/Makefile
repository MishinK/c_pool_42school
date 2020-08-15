# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashea <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/16 12:26:26 by ashea             #+#    #+#              #
#    Updated: 2020/03/16 12:28:56 by ashea            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


BSQ = ./srcs/ft_*.c 


all: colle

colle:
		gcc -Wall -Werror -Wextra -I ./includes $(BSQ) -o bsq
clean:
		rm -f ./bin/*.o

fclean: clean
		rm -f bsq

re: fclean all
