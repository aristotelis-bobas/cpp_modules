# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abobas <abobas@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/03 14:43:32 by abobas        #+#    #+#                  #
#    Updated: 2020/06/03 15:00:35 by abobas        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = 		megaphone.cpp

NAME = 		megaphone

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