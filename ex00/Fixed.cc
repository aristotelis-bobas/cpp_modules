/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cc                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/14 15:38:33 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/14 17:14:43 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructer called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed& src)
{
	std::cout << "Copy constructer called" << std::endl;
	this->value = src.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(Fixed& src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = src.getRawBits();
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
