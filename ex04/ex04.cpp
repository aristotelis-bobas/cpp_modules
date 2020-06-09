/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 20:16:36 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 17:14:50 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main()
{
	std::string string("HI THIS IS BRAIN");
	std::string *pointer = &string;
	std::string& reference = string;							// https://www.tutorialspoint.com/cplusplus/cpp_references.htm
	std::cout << string << std::endl;
	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;
	return (0);
}
