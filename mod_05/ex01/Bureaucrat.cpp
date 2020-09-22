/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 15:05:47 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/26 14:14:39 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <exception>
#include <iostream>

Bureaucrat::Bureaucrat(std::string const name, int grade):
	name(name)
{
	this->grade = grade;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other):
	name(other.name)
{
	this->grade = other.grade;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator = (Bureaucrat const &other)
{
	this->grade = other.grade;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: grade above maximum");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: grade below minimum");
}

void Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat " << this->getName() << " signed form ";
		std::cout << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Bureaucrat " << this->getName() << " can not sign form ";
		std::cout << form.getName() << " because " << e.what() << std::endl;
	}
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

void Bureaucrat::promoteGrade()
{
	this->grade -= 1;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();	
}

void Bureaucrat::demoteGrade()
{
	this->grade += 1;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();	
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream& operator << (std::ostream &out, Bureaucrat const &src)
{
	out << src.getName() << ", bureaucrat grade is " << src.getGrade() << std::endl;
	return (out);
}
