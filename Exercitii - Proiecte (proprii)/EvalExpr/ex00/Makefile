# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/20 20:56:06 by nmuresan          #+#    #+#              #
#    Updated: 2015/09/20 21:06:40 by nmuresan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = create_tables.c main.c str_functions.c other_functions.c

all: $(NAME)

$(NAME):
	gcc  -Wextra -Wall -Werror -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean 

re: fclean all
