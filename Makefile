#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/03 20:19:57 by ahrytsen          #+#    #+#              #
#    Updated: 2017/12/02 19:35:46 by astadnik         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME 	= hotrace
SRC		= clean_table.c fill_table.c ft_bzero.c ft_lstadd_end.c ft_memalloc.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_strchr.c ft_strcmp.c ft_strjoin.c ft_strlen.c ft_strlen_c.c ft_strnew.c ft_strsub.c get_next_line.c hash.c main.c print_hash.c
OBJ		= $(SRC:.c=.o)
HDR		= hotrace.h

all: $(SRC) $(NAME)

$(NAME): $(OBJ) $(HDR)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ)

%.o: %.c
	gcc -Wall -Wextra -Werror -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: 
	$(MAKE) fclean
	$(MAKE) all
