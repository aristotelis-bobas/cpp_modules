/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 21:19:58 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 22:32:46 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"
#include <string>

class PowerFist: public AWeapon
{
    public:
        PowerFist();
        PowerFist(PowerFist const &other);
        void operator = (PowerFist const &other);
        void attack() const;
        ~PowerFist();
};

#endif
