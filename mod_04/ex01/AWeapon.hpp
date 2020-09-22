/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 20:51:37 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 21:16:19 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon
{
    private:
        std::string name;
        int apcost;
        int damage;
    public:
        AWeapon(std::string const &name, int apcost, int damage);
        AWeapon(AWeapon const &other);
        AWeapon& operator = (AWeapon const &other);
        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        void setName(std::string name);
        void setAPCost(int apcost);
        void setDamage(int damage);
        virtual void attack() const = 0;
        virtual ~AWeapon();
};

#endif
