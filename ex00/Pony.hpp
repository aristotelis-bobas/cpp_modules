/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/06 21:56:24 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/06 23:24:43 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>

class Pony
{
	private:

	std::string		pony_name;
	
	public:

	Pony(char const *given_name);
	~Pony();
	
	void			eat(char const *given_food);
};

#endif
