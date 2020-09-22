# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abobas <abobas@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/16 23:28:56 by abobas        #+#    #+#                  #
#    Updated: 2020/06/18 19:03:57 by abobas        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = 		main.cpp \
			ClapTrap.cpp \
			FragTrap.cpp \
			ScavTrap.cpp \
			NinjaTrap.cpp \
			SuperTrap.cpp

INCLUDE =	ClapTrap.hpp \
			FragTrap.hpp \
			ScavTrap.hpp \
			NinjaTrap.hpp \
			SuperTrap.hpp
			
NAME = 		supertrap

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