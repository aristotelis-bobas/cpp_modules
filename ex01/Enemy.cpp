/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 21:24:00 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 21:17:54 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <string>

Enemy::Enemy(int hp, std::string const &type)
{
    this->hp = hp;
    this->type = type;
}

Enemy::Enemy(Enemy const &other)
{
    *this = other;
}

Enemy& Enemy::operator = (Enemy const &other)
{
    this->hp = other.hp;
    this->type = other.type;
	return (*this);
}

std::string Enemy::getType() const
{
    return (this->type);
}

int Enemy::getHP() const
{
    return (this->hp);
}

void Enemy::setType(std::string type)
{
    this->type = type;
}

void Enemy::setHP(int hp)
{
    this->hp = hp;
}

void Enemy::takeDamage(int damage)
{
    if (damage < 0)
        damage = 0;
    if (this->hp > 0)
        this->hp -= damage;
}

Enemy::~Enemy()
{
}
