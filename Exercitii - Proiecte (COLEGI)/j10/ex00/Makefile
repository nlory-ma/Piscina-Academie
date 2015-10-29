# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pforgaci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/15 13:09:43 by pforgaci          #+#    #+#              #
#    Updated: 2015/09/16 11:28:47 by pforgaci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c 
srcs/ft_strlen.c srcs/ft_swap.c
EXEC = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:
	gcc -Wall -Wextra -Werror -Iincludes/ -c $(SRC) && ar rc $(NAME) $(EXEC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
