/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/05 17:45:32 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/06 19:21:58 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "contact.hpp"

int		main(void)
{
	std::string 	command;
	contact 		contact[8];
	int 			i = 0;
	int				contacts = 0;

	while (1)
	{
		i = i % 8;
		std::cout << "PhoneBook_OS_1.1 > ";
		std::getline(std::cin, command);
		if (!command.compare("EXIT"))
			exit(0);
		if (!command.compare("ADD"))
		{
			contacts++;
			std::cout << "Creating contact " << i + 1 << std::endl;
			contact[i++].add();
			std::cout << "Contact " << i << " created" << std::endl;
		}
		if (!command.compare("SEARCH"))
		{
			if (contacts >= 7)
				contacts = 8;
			std::cout << "Searching contacts" << std::endl;
			for(int j = 0; j < contacts; j++)
				contact[j].search(j);
			std::cout << "Which contact do you want to show?" << std::endl;
			std::getline(std::cin, command);
			if (atoi(command.c_str()) <= 0 || atoi(command.c_str()) > contacts)
				std::cout << "Contact does not exist" << std::endl;
			else
				contact[atoi(command.c_str()) - 1].show();
		}
	}
	return (0);
}
