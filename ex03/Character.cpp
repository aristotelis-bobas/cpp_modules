/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 23:11:21 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 23:43:39 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

Character::Character(std::string const &name): 
	ICharacter()
{
	this->name = name;
	this->count = 0;
}

Character::Character(Character const &other): 
	ICharacter()
{
	this->name = other.name;
	for (int i = 0; i < other.count - 1; i++)
		this->inventory[i] = other.inventory[i]->clone();
	this->count = other.count;
}

Character& Character::operator = (Character const &other)
{
	this->name = other.name;
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

void Character::equip(AMateria *m)
{
	if (this->count < 4)
	{
		this->inventory[count] = m;
		this->count++;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < count)
	{
		this->inventory[idx] = 0;
		this->count--;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < count)
	{
		this->inventory[idx]->use(target);
	}
}

std::string const& Character::getName() const
{
	return (this->name);	
}

Character::~Character()
{
	for (int i = 0; i < this->count; i++)
		delete this->inventory[i];
}
