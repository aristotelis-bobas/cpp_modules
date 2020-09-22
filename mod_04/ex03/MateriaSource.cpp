/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 23:52:20 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/20 00:06:32 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include <string>

MateriaSource::MateriaSource():
	IMateriaSource()
{
	this->count = 0;
}

MateriaSource::MateriaSource(MateriaSource const &other):
	IMateriaSource()
{
	for (int i = 0; i < other.count; i++)
		this->inventory[i] = other.inventory[i]->clone();
	this->count = other.count;
}

MateriaSource& MateriaSource::operator = (MateriaSource const &other)
{
	if (this->count > 0)
	{
		for (int i = 0; i < this->count; i++)
			delete this->inventory[i];
	}
	for (int i = 0; i < other.count; i++)
		this->inventory[i] = other.inventory[i]->clone();
	this->count = other.count;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->count < 4)
	{
		this->inventory[count] = m;
		this->count++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->count; i++)
	{
		if (!this->inventory[i]->getType().compare(type))
			return (this->inventory[i]->clone());
	}
	return (0);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->count; i++)
		delete this->inventory[i];
}
