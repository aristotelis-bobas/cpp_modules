# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abobas <abobas@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/08 23:55:17 by abobas        #+#    #+#                  #
#    Updated: 2020/06/09 00:20:52 by abobas        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = 		replace.cpp \
			
NAME = 		replace

FLAGS =		-Wall -Werror -Wextra

CC =		clang++

all: 		$(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all