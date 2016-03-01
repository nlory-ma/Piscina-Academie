# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/23 18:59:27 by nmuresan          #+#    #+#              #
#    Updated: 2016/03/01 10:23:51 by nmuresan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = matrix.c other_functions.c other_functions2.c standard_input.c create_string.c

OBJ = $(SRCS:.c=.o)

FLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)

clean:
	/bin/rm -f $(OBJ)

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all
