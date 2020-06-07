/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/06 22:06:39 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/06 23:36:02 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony(char const *given_name)
{
	pony_name = std::string(given_name);
	std::cout << "Pony " << pony_name << " was constructed" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony " << pony_name << " was destructed" << std::endl;
}

void Pony::eat(char const *given_food)
{
	std::cout << "Pony " << pony_name << " eats " << given_food << std::endl;
}
