/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 21:55:12 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 21:55:52 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"
#include <string>

class RadScorpion: public Enemy
{
    public:
        RadScorpion();
        RadScorpion(RadScorpion const &other);
        void operator = (RadScorpion const &other);
        void takeDamage(int damage);
        ~RadScorpion();
};

#endif
