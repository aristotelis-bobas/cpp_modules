/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/06 23:26:38 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 16:27:22 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	MemoryLeak()
{
	std::string			*panther = new std::string("String panther");
	
	std::cout << *panther << std::endl;
	delete panther;
}
