/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cc                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/14 15:38:33 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/14 16:03:27 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructer called" << std::endl;
	this->fixed_point_value_ = 0;
}

Fixed::Fixed(Fixed& src)
{
	std::cout << "Copy constructer called" << std::endl;
	this->fixed_point_value_ = src.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(Fixed& src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point_value_ = src.getRawBits();
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_value_);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_value_ = raw;
}
