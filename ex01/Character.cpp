/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 22:18:00 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 22:56:27 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>
#include <string>

Character::Character(std::string const &name)
{
    this->name = name;
    this->AP = 40;
    this->equipped = false;
}

Character::Character(Character const &other)
{
    *this = other;
}

void Character::operator = (Character const &other)
{
    this->name = other.name;
    this->AP = other.AP;
    this->weapon = other.weapon;
}

void Character::recoverAP()
{
    this->AP += 10;
    if (this->AP > 40)
        this->AP = 40;
}

void Character::equip(AWeapon *weapon)
{
    this->weapon = weapon;
    this->equipped = true;
}

void Character::attack(Enemy *enemy)
{
    if (this->equipped == true)
    {
        if (this->AP >= weapon->getAPCost())
        {
            std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
            this->weapon->attack();
            this->AP -= weapon->getAPCost();
            enemy->takeDamage(this->weapon->getDamage());
            if (enemy->getHP() <= 0)
                delete enemy;
        }
    }
}

std::string Character::getName() const
{
    return (this->name);
}

std::string Character::getWeapon() const
{
    return (this->weapon->getName());
}

bool Character::getEquipped() const
{
    return (this->equipped);
}

int Character::getAP() const
{
    return (this->AP);
}

Character::~Character()
{
}

std::ostream& operator << (std::ostream &out, Character const &src)
{
    if (src.getEquipped() == false)
        out << src.getName() << " has " << src.getAP() << " AP and is unarmed";
    else
        out << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWeapon();
    out << std::endl;
    return (out);
}
