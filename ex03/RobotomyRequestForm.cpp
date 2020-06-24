/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/23 16:36:54 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/24 22:10:52 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target):
    Form("RobotomyRequestForm", target, 72, 45)
{   
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
    Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecuteGrade())
{    
}

RobotomyRequestForm& RobotomyRequestForm::operator = (RobotomyRequestForm const &other)
{
    this->setStatus(other.getStatus());
    this->setTarget(other.getTarget());
    return (*this);
}

Form* RobotomyRequestForm::clone() const
{
	return (new RobotomyRequestForm(*this));
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
   	if (this->getStatus() == false)
		throw Form::FormNotSigned();
	if (executor.getGrade() > this->getExecuteGrade())
		throw Form::ExecuteGradeTooLow();
    std::cout << "Drill goes *BRRRRRRRRRRRRRR*" << std::endl;
    if (rand() % 2 == 1)
        std::cout << "Robotomization of " << this->getTarget() << " was succesful" << std::endl;
    else
        std::cout << "Robotomization of " << this->getTarget() << " has failed miserably" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
