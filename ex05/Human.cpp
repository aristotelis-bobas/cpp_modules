/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 21:03:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/07 21:59:48 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

Human::Human()
{
}

const Brain&		Human::getBrain()
{
	return(brain);
}

std::string			Human::identify()
{
	return (brain.identify());
}
