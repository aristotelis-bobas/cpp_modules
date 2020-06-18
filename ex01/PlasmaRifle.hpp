/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 20:58:57 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 21:20:53 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <string>

class PlasmaRifle: public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(PlasmaRifle const &other);
        void operator = (PlasmaRifle const &other);
        void attack() const;
        ~PlasmaRifle();
};

#endif
