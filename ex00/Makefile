# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abobas <abobas@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/06 21:52:50 by abobas        #+#    #+#                  #
#    Updated: 2020/06/06 22:17:30 by abobas        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = 		main.cpp \
			Pony.cpp

NAME = 		pony

FLAGS =		-Wall -Werror -Wextra -std=c++98 -pedantic

CC =		clang++

all: 		$(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all