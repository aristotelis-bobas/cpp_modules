/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/23 16:36:52 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/24 22:09:56 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target):
    Form("PresidentialPardonForm", target, 25, 5)
{   
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other):
    Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecuteGrade())
{    
}

PresidentialPardonForm& PresidentialPardonForm::operator = (PresidentialPardonForm const &other)
{
    this->setStatus(other.getStatus());
    this->setTarget(other.getTarget());
    return (*this);
}

Form* PresidentialPardonForm::clone() const
{
	return (new PresidentialPardonForm(*this));
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getStatus() == false)
		throw Form::FormNotSigned();
	if (executor.getGrade() > this->getExecuteGrade())
		throw Form::ExecuteGradeTooLow();
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
