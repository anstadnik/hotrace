#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/03 20:19:57 by ahrytsen          #+#    #+#              #
#    Updated: 2017/12/03 17:32:33 by ahrytsen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME 	= hotrace
SRC		= get_next_line.c main.c clean_tree.c fill_tree.c print_tree.c utils.c
OBJ		= $(SRC:.c=.o)
HDR		= hotrace.h

all: $(SRC) $(NAME)

$(NAME): $(OBJ) $(HDR)
	gcc -Wall -Wextra -Werror -O3 -o $(NAME) $(OBJ)

%.o: %.c
	gcc -Wall -Wextra -Werror -O3 -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

