# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/15 13:04:45 by nmuresan          #+#    #+#              #
#    Updated: 2015/09/15 16:27:33 by nmuresan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ZAMA = libft.a

SRC = srcs/ft_putchar srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen \
	  srcs/ft_swap

all: $(ZAMA)
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc $(ZAMA) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(ZAMA)

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 

fclean: clean
	/bin/rm -f $(ZAMA)

re: fclean all
