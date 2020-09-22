# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abobas <abobas@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/08 23:55:17 by abobas        #+#    #+#                  #
#    Updated: 2020/06/09 16:06:44 by abobas        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = 		replace.cpp \
			SedIsForLosers.cpp

INCLUDE =	SedIsForLosers.hpp
			
NAME = 		replace

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