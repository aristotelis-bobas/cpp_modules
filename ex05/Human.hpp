/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 20:27:21 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/07 21:59:25 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
	private:
	
	const Brain			brain;

	public:

	Human();
	const Brain&		getBrain(); 					// https://www.tutorialspoint.com/cplusplus/returning_values_by_reference.htm
	std::string			identify();
};

#endif
