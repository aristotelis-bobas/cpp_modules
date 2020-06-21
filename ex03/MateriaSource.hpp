/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 16:45:54 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/21 14:52:50 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria* inventory[4];
		int count;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		MateriaSource& operator = (MateriaSource const &other);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const &type);
		virtual ~MateriaSource();
};

#endif

