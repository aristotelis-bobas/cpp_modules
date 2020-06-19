/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 20:03:04 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 21:14:25 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <string>
#include <iostream>

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    std::cout << name << ", " << title << " is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
    *this = other;
}

Sorcerer& Sorcerer::operator = (Sorcerer const &other)
{
    this->name = other.name;
    this->title = other.title;
    std::cout << name << ", " << title << " is born!" << std::endl;
	return (*this);
}

std::string Sorcerer::getName() const
{
    return (this->name);
}

std::string Sorcerer::getTitle() const
{
    return (this->title);
}

void Sorcerer::polymorph(Victim const &target)
{
    target.getPolymorphed();
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title << " is dead. Consequences will never be the same!" << std::endl;
}

std::ostream& operator << (std::ostream &out, Sorcerer const &src)
{
    out << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
    return (out);
}
