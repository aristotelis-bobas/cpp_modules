/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 20:26:59 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/07 21:33:01 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	public:

	Brain();
	std::string	identify() const;    				// http://duramecho.com/ComputerInformation/WhyHowCppConst.html
};

#endif
