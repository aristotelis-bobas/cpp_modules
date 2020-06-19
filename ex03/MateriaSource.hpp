/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/19 16:45:54 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/19 21:11:57 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class MateriaSource: public AMateria
{
	public:
		MateriaSource(std::string const &type);
		MateriaSource(MateriaSource const &other);
		void operator = (MateriaSource const &other);
		~MateriaSource();
	
};

