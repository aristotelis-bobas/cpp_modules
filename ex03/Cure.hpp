/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 22:57:42 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 22:58:03 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(Cure const &other);
		Cure& operator = (Cure const &other);
		AMateria* clone() const;
		void use(ICharacter &target);
		~Cure();
};

#endif
