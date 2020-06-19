/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 11:50:49 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 22:18:08 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

Squad::Squad():
	ISquad()
{
	this->size = 0;
	this->capacity = 8;
	this->squad = new ISpaceMarine*[this->capacity];
}

Squad::Squad(Squad const &other):
	ISquad()
{
	this->size = other.size;
	this->capacity = other.capacity;
	this->squad = new ISpaceMarine*[this->capacity];
	for (int i = 0; i < this->size; i++)
		this->squad[i] = other.getUnit(i)->clone();
}

Squad& Squad::operator = (Squad const &other)
{
	if (this->size > 0)
	{
		for (int i = 0; i < this->size; i++)
			delete this->squad[i];
	}
	delete[] this->squad;
	this->size = other.size;
	this->capacity = other.capacity;
	this->squad = new ISpaceMarine*[this->capacity];
	for (int i = 0; i < this->size; i++)
		this->squad[i] = other.getUnit(i)->clone();
	return (*this);
}

int Squad::getCount() const
{
	return (this->size);
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (index >= 0 && index < this->size)
		return (this->squad[index]);
	else
		return (0);	
}

int Squad::push(ISpaceMarine *marine)
{
	if (marine)
	{
		for (int i = 0; i < this->size; i++)
		{
			if (this->squad[i] == marine)
				return (this->size);
		}
		if (this->size == this->capacity)
		{
			this->capacity *= 2;
			ISpaceMarine **temp = new ISpaceMarine*[this->capacity];
			for (int i = 0; i < this->size; i++)
				temp[i] = this->squad[i];
			delete[] this->squad;
			this->squad = temp;
		}
		this->squad[size] = marine;
		this->size += 1;
		return (this->size);
	}
	else
		return (this->size);
}

Squad::~Squad()
{
	for (int i = 0; i < this->size; i++)
		delete this->squad[i];
	delete[] this->squad;
}
