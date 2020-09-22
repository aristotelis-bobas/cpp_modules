# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abobas <abobas@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/03 14:43:32 by abobas        #+#    #+#                  #
#    Updated: 2020/06/06 16:43:35 by abobas        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = 		phonebook.cpp \
			contact.cpp

NAME = 		phonebook

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