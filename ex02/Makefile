# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abobas <abobas@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/18 20:49:13 by abobas        #+#    #+#                  #
#    Updated: 2020/06/20 01:08:18 by abobas        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = 		main.cpp \
			Squad.cpp \
			TacticalMarine.cpp \
			AssaultTerminator.cpp


INCLUDE =	ISquad.hpp \
			ISpaceMarine.hpp \
			Squad.hpp \
			TacticalMarine.hpp \
			AssaultTerminator.hpp
			
NAME = 		purify

FLAGS =		-Wall -Werror -Wextra -std=c++98 -pedantic

CC =		clang++

all: 		$(NAME)

$(NAME): 	$(SRC) $(INCLUDE)
			$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all