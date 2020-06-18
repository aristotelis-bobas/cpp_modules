/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 20:12:58 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 20:35:31 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <string>
#include <iostream>

Victim::Victim(std::string name)
{
    this->name = name;
    std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &other)
{
    *this = other;
}

void Victim::operator = (Victim const &other)
{
    this->name = other.name;
    std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

std::string Victim::getName() const
{
    return (this->name);
}

void Victim::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

std::ostream& operator << (std::ostream &out, Victim const &src)
{
    out << "I'm " << src.getName() << " and I like otters!" << std::endl;
    return (out);
}

