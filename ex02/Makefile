# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abobas <abobas@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/06 23:41:48 by abobas        #+#    #+#                  #
#    Updated: 2020/06/07 13:58:42 by abobas        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = 		main.cpp \
			Zombie.cpp \
			ZombieEvent.cpp \

NAME = 		zombie

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