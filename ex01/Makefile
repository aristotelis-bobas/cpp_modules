# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abobas <abobas@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/18 20:49:13 by abobas        #+#    #+#                  #
#    Updated: 2020/06/18 20:50:24 by abobas        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = 		main.cpp \
			AWeapon.cpp \
			PlasmaRifle.cpp \
			PowerFist.cpp \
			Enemy.cpp \
			SuperMutant.cpp \
			RadScorpion.cpp \
			Character.cpp

INCLUDE =	AWeapon.hpp \
			PlasmaRifle.hpp \
			PowerFist.hpp \
			Enemy.hpp \
			SuperMutant.hpp \
			RadScorpion.hpp \
			Character.hpp
			
NAME = 		fire

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