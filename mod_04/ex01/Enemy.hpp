/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 21:23:58 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 21:18:15 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy
{
    private:
        std::string type;
        int hp;
    public:
        Enemy(int hp, std::string const &type);
        Enemy(Enemy const &other);
        Enemy& operator = (Enemy const &other);
        std::string getType() const;
        int getHP() const;
        void setType(std::string type);
        void setHP(int hp);
        virtual void takeDamage(int damage);
        virtual ~Enemy();
};

#endif
