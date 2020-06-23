# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abobas <abobas@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/22 15:06:35 by abobas        #+#    #+#                  #
#    Updated: 2020/06/23 22:21:00 by abobas        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = 		main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			PresidentialPardonForm.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestform.cpp

INCLUDE =	Bureaucrat.hpp \
			Form.hpp \
			RobotomyRequestform.hpp \
			ShrubberyCreationForm.hpp \
			PresidentialPardonForm.hpp
			
NAME = 		formfrenzy

FLAGS =		-Wall -Werror -Wextra -std=c++98 -pedantic

CC =		clang++

all: 		$(NAME)

$(NAME):	$(SRC) $(INCLUDE)
			$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all