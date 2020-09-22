/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 18:30:07 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/29 13:13:33 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <ostream>
#include <exception>

Form::Form(std::string name, std::string target, int sign_grade, int execute_grade):
	name(name), target(target), sign_grade(sign_grade), execute_grade(execute_grade)
{
	if (this->sign_grade < 1 || this->execute_grade < 1)
		throw Form::GradeTooHighException();
	if (this->sign_grade > 150 || this->execute_grade > 150)
		throw Form::GradeTooLowException();
	this->status = false;
}

Form::Form(Form const &other):
	name(other.name), target(other.target), sign_grade(other.sign_grade), execute_grade(other.execute_grade)
{
	if (this->sign_grade < 1 || this->execute_grade < 1)
		throw Form::GradeTooHighException();
	if (this->sign_grade > 150 || this->execute_grade > 150)
		throw Form::GradeTooLowException();
	this->status = other.status;
}

Form& Form::operator = (Form const &other)
{
	this->status = other.status;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("grade above maximum");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("grade below minimum");
}

const char* Form::FormAlreadySigned::what() const throw()
{
	return ("form is already signed");
}

const char* Form::FormNotSigned::what() const throw()
{
	return ("form is not signed");
}

void Form::setStatus(bool value)
{
	this->status = value;
}

bool Form::getStatus() const
{
	return (this->status);
}

std::string Form::getName() const
{
	return (this->name);
}

std::string Form::getTarget() const
{
	return (this->target);
}

void Form::setTarget(std::string target)
{
	this->target = target;
}

int Form::getSignGrade() const
{
	return (this->sign_grade);
}

int Form::getExecuteGrade() const
{
	return (this->execute_grade);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (this->getSignGrade() < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	if (this->getStatus() == true)
		throw Form::FormAlreadySigned();
	this->setStatus(true);
}

void Form::execute(Bureaucrat const &executor) const
{
	if (this->getStatus() == false)
		throw Form::FormNotSigned();
	if (this->getExecuteGrade() < executor.getGrade())
		throw Form::GradeTooLowException();	
}

std::ostream& operator << (std::ostream &out, Form const &src)
{
	out << "Form " << src.getName() << " needs a bureaucrat of at least grade " << src.getSignGrade();
	out << " to be signed and " << src.getExecuteGrade() << " to be executed\n";
	out << "Form " << src.getName() << " is ";
	if (src.getStatus() == true)
		out << "already signed";
	else
		out << "not signed yet";
	out << std::endl;
	return (out);
}

Form::~Form()
{
}

