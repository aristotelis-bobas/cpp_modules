/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Conversion.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/29 14:08:00 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/30 15:06:00 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <iomanip>

Conversion::Conversion(char const *arg)
{
    this->arg = arg;
    this->decimals = false;
    this->special = false;
    this->overflow = false;
    if (!this->parse())
    	this->display();
}

Conversion::Conversion(Conversion const &other)
{
    this->arg = other.arg;
    this->decimals = other.decimals;
    this->special = other.special;
    this->overflow = other.overflow;
	if (!this->parse())
    	this->display();
}

Conversion& Conversion::operator = (Conversion const &other)
{
    this->arg = other.arg;
    this->decimals = other.decimals;
    this->special = other.special;
    this->overflow = other.overflow;
	if (!this->parse())
    	this->display();
    return (*this);
}

int Conversion::parse()
{
    if (this->arg.length() == 0)
    {
        std::cout << "Empty argument" << std::endl;
        return (1);
    }
    if (this->arg.length() == 1 && !isdigit(this->arg[0]))
    {
        this->type = "char";
        this->char_value = this->arg[0];
        return (0);
    }
    else
    {
        this->type = "int";
        for (size_t i = 0; i < this->arg.length(); i++)
        {
            if (this->arg[i] == '.')
            {
                this->type = "double";
                for (size_t j = i + 1; j < this->arg.length(); j++)
                {
                    if (this->arg[j] != '0' && this->arg[j] != 'f')
                    {
                        this->decimals = true;
                        break ;
                    }
                }
                break ;
            }
        }
        if (this->arg[this->arg.length() - 1] == 'f')
            this->type = "float";
        if (this->arg == "-inf" || this->arg == "+inf" || this->arg == "nan" || this->arg == "inf")
        {
            this->special = true;
            this->type = "double";
        }
        if (this->arg == "-inff" || this->arg == "+inff" || this->arg == "nanf" || this->arg == "inff")
        {
            this->special = true;
            this->type = "float";
        }
        long temp = strtol(this->arg.c_str(), 0, 10);
        if (temp > std::numeric_limits<int>::max() || temp < std::numeric_limits<int>::min())
        {
            this->overflow = true;
        }
        if (this->type == "int")
        {
            if (this->overflow)
            {
                this->impossible();
                return (1);
            }
            this->int_value = strtol(this->arg.c_str(), 0, 10); 
        }
        else if (this->type == "float")
            this->float_value = strtof(this->arg.c_str(), 0);
        else
            this->double_value = strtod(this->arg.c_str(), 0);
    }
    return (0);
}

void Conversion::impossible()
{
    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";
    std::cout << "float: impossible\n";
    std::cout << "double: impossible\n";
}

void Conversion::display()
{
    if (this->type == "char")
    {
        this->int_value = static_cast<int>(this->char_value);
        this->float_value = static_cast<float>(this->char_value);
        this->double_value = static_cast<double>(this->char_value);
        std::cout << "char: ";
        if (this->special || this->overflow || this->int_value < 0 || this->int_value > 127)
            std::cout << "impossible\n";
        else if (this->char_value < 32 || this->char_value > 126)
            std::cout << "Non displayable\n";
        else
        {
            std::cout << "'" << this->char_value << "'\n";
        }
        std::cout << "int: ";
        if (this->special || this->overflow)
            std::cout << "impossible\n";
        else
        {
            std::cout << this->int_value << "\n";
        }
        std::cout << "float: " << std::setprecision(1) << std::fixed << this->float_value << "f\n";
        std::cout << "double: " << std::setprecision(1) << std::fixed << this->double_value << std::endl;
    }
    else if (this->type == "int")
    {
        this->char_value = static_cast<char>(this->int_value);
        this->float_value = static_cast<float>(this->int_value);
        this->double_value = static_cast<double>(this->int_value);
        std::cout << "char: ";
        if (this->special || this->overflow || this->int_value < 0 || this->int_value > 127)
            std::cout << "impossible\n";
        else if (this->char_value < 32 || this->char_value > 126)
            std::cout << "Non displayable\n";
        else
        {
            std::cout << "'" << this->char_value << "'\n";
        }
        std::cout << "int: ";
        if (this->special || this->overflow)
            std::cout << "impossible\n";
        else
        {
            std::cout << this->int_value << "\n";
        }
        std::cout << "float: " << std::setprecision(1) << std::fixed << this->float_value << "f\n";
        std::cout << "double: " << std::setprecision(1) << std::fixed << this->double_value << std::endl;
    }
    else if (this->type == "float")
    {
        this->char_value = static_cast<char>(this->float_value);
        this->int_value = static_cast<int>(this->float_value);
        this->double_value = static_cast<double>(this->float_value);
        std::cout << "char: ";
        if (this->special || this->overflow || this->int_value < 0 || this->int_value > 127)
            std::cout << "impossible\n";
        else if (this->char_value < 32 || this->char_value > 126)
            std::cout << "Non displayable\n";
        else
        {
            std::cout << "'" << this->char_value << "'\n";
        }
        std::cout << "int: ";
        if (this->special || this->overflow)
            std::cout << "impossible\n";
        else
        {
            std::cout << this->int_value << "\n";
        }
        std::cout << "float: " << std::setprecision(1) << std::fixed << this->float_value << "f\n";
        std::cout << "double: " << std::setprecision(1) << std::fixed << this->double_value << std::endl;
    }
    else if (this->type == "double")
    {
        this->char_value = static_cast<char>(this->double_value);
        this->int_value = static_cast<int>(this->double_value);
        this->float_value = static_cast<float>(this->double_value);
        std::cout << "char: ";
        if (this->special || this->overflow || this->int_value < 0 || this->int_value > 127)
            std::cout << "impossible\n";
        else if (this->char_value < 32 || this->char_value > 126)
            std::cout << "Non displayable\n";
        else
        {
            std::cout << "'" << this->char_value << "'\n";
        }
        std::cout << "int: ";
        if (this->special || this->overflow)
            std::cout << "impossible\n";
        else
        {
            std::cout << this->int_value << "\n";
        }
        std::cout << "float: " << std::setprecision(1) << std::fixed << this->float_value << "f\n";
        std::cout << "double: " << std::setprecision(1) << std::fixed << this->double_value << std::endl;
    }
}

Conversion::~Conversion()
{
}
