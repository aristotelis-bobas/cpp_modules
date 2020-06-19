/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 21:55:58 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 11:11:07 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include <iostream>
#include <string>

RadScorpion::RadScorpion():
    Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &other):
    Enemy(other.getHP(), other.getType())
{
    std::cout << "* click click click *" << std::endl;
}

void RadScorpion::operator = (RadScorpion const &other)
{
    this->setHP(other.getHP());
    this->setType(other.getType());
}

void RadScorpion::takeDamage(int damage)
{
    if (this->getHP() > 0)
    {
        this->Enemy::takeDamage(damage);
        if (this->getHP() <= 0)
            std::cout << "* SPROTCH *" << std::endl;
    }
}

RadScorpion::~RadScorpion()
{
}
