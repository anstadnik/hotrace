#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/03 20:19:57 by ahrytsen          #+#    #+#              #
#    Updated: 2017/12/03 14:58:48 by astadnik         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME 	= hotrace
SRC		= ft_putstr_fd.c ft_bzero.c ft_memalloc.c ft_strchr.c ft_strnew.c	\
		ft_memset.c ft_strsub.c ft_lstadd_end.c ft_putchar_fd.c ft_strjoin.c\
		ft_putendl_fd.c ft_strlen.c ft_strlen_c.c get_next_line.c main.c	\
		clean_tree.c fill_tree.c print_tree.c
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

