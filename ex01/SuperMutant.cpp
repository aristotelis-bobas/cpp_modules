/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 21:33:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 10:59:02 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include <iostream>
#include <string>

SuperMutant::SuperMutant():
    Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &other):
    Enemy(other.getHP(), other.getType())
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

void SuperMutant::operator = (SuperMutant const &other)
{
    this->setHP(other.getHP());
    this->setType(other.getType());
}

void SuperMutant::takeDamage(int damage)
{
    if (this->getHP() > 0)
    {
        damage -= 3;
        this->Enemy::takeDamage(damage);
        if (this->getHP() <= 0)
            std::cout << "Aaargh..." << std::endl;
    }
}

SuperMutant::~SuperMutant()
{
}
