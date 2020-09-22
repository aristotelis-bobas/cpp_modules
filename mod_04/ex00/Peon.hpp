/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 20:22:48 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/21 14:51:24 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"
#include <string>

class Peon: public Victim
{
    public:
        Peon(std::string name);
        Peon(Peon const &other);
        Peon& operator = (Peon const &other);
        void getPolymorphed() const;
        virtual ~Peon();
};

#endif
