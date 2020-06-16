/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/14 15:38:33 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/16 14:26:32 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <bitset>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructer called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructer called" << std::endl;
	this->value = (value << this->bits);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructer called" << std::endl;
	this->value = roundf(value * (1 << this->bits));
}

Fixed::Fixed(float const value, bool show_binary)
{
	std::cout << "Float constructer called" << std::endl;
	if (show_binary == true)
	{
		std::bitset<32> binary(value);
		std::cout << "Binary value before fixed point conversion: " << binary << std::endl;
	}
	this->value = roundf(value * (1 << this->bits));
	if (show_binary == true)
	{
		std::bitset<32> binary(this->value);
		std::cout << "Binary value after fixed point conversion: " << binary << std::endl;
	}
}

Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy constructer called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(Fixed const& src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = src.getRawBits();
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int Fixed::toInt(void) const
{
	return ((this->value >> this->bits));
}

float Fixed::toFloat(void) const
{
	return (((float)this->value / (float)(1 << this->bits)));
}

std::ostream& operator<<(std::ostream& out, Fixed const& src)
{
	out << src.toFloat();
	return (out);
}
