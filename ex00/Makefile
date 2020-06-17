# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abobas <abobas@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/16 23:28:56 by abobas        #+#    #+#                  #
#    Updated: 2020/06/16 23:30:48 by abobas        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = 		main.cpp \
			FragTrap.cpp

INCLUDE =	FragTrap.hpp
			
NAME = 		fragtrap

FLAGS =		-Wall -Werror -Wextra -std=c++98 -pedantic

CC =		clang++

all: 		$(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all