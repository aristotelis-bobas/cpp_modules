/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 20:25:50 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/07 21:25:21 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <sstream>

Brain::Brain()
{
	
}

std::string		Brain::identify() const
{
	std::stringstream	String;
	long Address = (long)this;
	String << "0x" << std::uppercase << std::hex << Address;
	return (String.str());
}