/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/05 18:07:15 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/06 19:18:30 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "contact.hpp"

contact::contact()
{
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		login;
	std::string		postal_address;
	std::string		email_address;
	std::string		phone_number;
	std::string		birthday_date;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;
}

void contact::add()
{
	std::cout << "Insert first name > ";
	std::getline(std::cin, first_name);
	std::cout << "Insert last name > ";
	std::getline(std::cin, last_name);
	std::cout << "Insert nickname > ";
	std::getline(std::cin, nickname);
	std::cout << "Insert login > ";
	std::getline(std::cin, login);
	std::cout << "Insert postal address > ";
	std::getline(std::cin, postal_address);
	std::cout << "Insert email address > ";
	std::getline(std::cin, email_address);
	std::cout << "Insert phone number > ";
	std::getline(std::cin, phone_number);
	std::cout << "Insert birthday date > ";
	std::getline(std::cin, birthday_date);
	std::cout << "Insert favorite meal > ";
	std::getline(std::cin, favorite_meal);
	std::cout << "Insert underwear color > ";
	std::getline(std::cin, underwear_color);
	std::cout << "Insert darkest secret > ";
	std::getline(std::cin, darkest_secret);
}

void contact::show(void)
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal address: " << postal_address << std::endl;
	std::cout << "Email address: " << email_address << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Birthday date: " << birthday_date << std::endl;
	std::cout << "Favorite meal: " << favorite_meal << std::endl;
	std::cout << "Underwear color: " << underwear_color << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

void contact::search(int i)
{
	int len = 0;
	
	std::cout << "         " << i + 1 << '|';
	if (contact::first_name.length() > 10)
		std::cout << (contact::first_name.substr(0, 9)).replace(9, 1, 1, '.') << '|';
	else
	{
		len = 10 - contact::first_name.length();
		std::cout << contact::first_name.substr(0, contact::first_name.length()).insert(0, len, ' ') << '|';
	}
	if (contact::last_name.length() > 10)
		std::cout << (contact::last_name.substr(0, 9)).replace(9, 1, 1, '.') << '|';
	else
	{
		len = 10 - contact::last_name.length();
		std::cout << contact::last_name.substr(0, contact::last_name.length()).insert(0, len, ' ') << '|';
	}
	if (contact::nickname.length() > 10)
		std::cout << (contact::nickname.substr(0, 9)).replace(9, 1, 1, '.') << std::endl;
	else
	{
		len = 10 - contact::nickname.length();
		std::cout << contact::nickname.substr(0, contact::nickname.length()).insert(0, len, ' ') << std::endl;
	}
}
