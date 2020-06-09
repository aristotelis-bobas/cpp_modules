/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/06 23:47:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 16:29:26 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::string name;
	std::string type;
}

Zombie::Zombie(std::string insert_name, std::string insert_type)
{
	name = insert_name;
	type = insert_type;
}

Zombie::~Zombie()
{
	std::cout << name << " (" << type << ") died" << std::endl;
}

void	Zombie::announce()
{
	std::cout << '<' << name << " (" << type << ")> * FOUL SCREECHING AND GASPING * " << std::endl;
}

void	Zombie::announce(char const *insert_text)
{
	std::cout << '<' << name << " (" << type << ")>  " << insert_text << std::endl;
}
