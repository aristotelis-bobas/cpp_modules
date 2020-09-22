/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 23:11:21 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/20 00:41:46 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

Character::Character(std::string const &name): 
	ICharacter()
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->equipped[i] = false;
}

Character::Character(Character const &other): 
	ICharacter()
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		this->equipped[i] = other.equipped[i];
		if (this->equipped[i] == true)
			this->inventory[i] = other.inventory[i]->clone();
	}
}

Character& Character::operator = (Character const &other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (this->equipped[i] == true)
		{
			delete this->inventory[i];
			this->equipped[i] = false;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		this->equipped[i] = other.equipped[i];
		if (this->equipped[i] == true)
			this->inventory[i] = other.inventory[i]->clone();
	}
	return (*this);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->equipped[i] == false)
		{
			this->inventory[i] = m;
			this->equipped[i] = true;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	
	if (idx >= 0 && idx < 4)
	{
		if (this->equipped[idx] == true)
		{
			this->inventory[idx] = 0;
			this->equipped[idx] = false;
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->equipped[idx] == true)
			this->inventory[idx]->use(target);
	}
}

std::string const& Character::getName() const
{
	return (this->name);	
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->equipped[i] == true)
		{
			delete this->inventory[i];
			this->equipped[i] = false;
		}
	}
}
