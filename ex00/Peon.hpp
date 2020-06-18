/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 20:22:48 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 20:26:50 by abobas        ########   odam.nl         */
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
        void operator = (Peon const &other);
        void getPolymorphed() const;
        ~Peon();
};

#endif
