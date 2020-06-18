/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 22:15:45 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 22:53:44 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"
#include <string>
#include <ostream>

class Character
{
    private:
        std::string name;
        int AP;
        bool equipped;
        AWeapon *weapon;
    public:
        Character(std::string const &name);
        Character(Character const &other);
        void operator = (Character const &other);
        void recoverAP();
        void equip(AWeapon* weapon);
        void attack(Enemy* enemy);
        std::string getName() const;
        std::string getWeapon() const;
        bool getEquipped() const;
        int getAP() const;
        ~Character();
};

std::ostream& operator << (std::ostream &out, Character const &src);

#endif
