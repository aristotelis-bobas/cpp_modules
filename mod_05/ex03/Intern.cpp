/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/24 16:32:42 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/29 13:27:32 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <exception>
#include <iostream>

Intern::Intern()
{   
}

Intern::Intern(Intern const &other)
{
    (void)other;
}

Intern& Intern::operator = (Intern const &other)
{
    (void)other;
    return (*this);
}

const char* Intern::FormNotFound::what() const throw()
{
    return ("Exception: form not found");
}

Form* Intern::makeForm(std::string name, std::string target)
{
    Form* form = 0;
    this->forms[0] = new PresidentialPardonForm(target);
    this->forms[1] = new ShrubberyCreationForm(target);
    this->forms[2] = new RobotomyRequestForm(target);
    for (int i = 0; i < 3; i++)
    {
        if (!forms[i]->getName().compare(name))
        {
            std::cout << "Intern creates form " << name << std::endl;
            form = forms[i]->clone();
            this->freeForms();
            return (form);
        }
    }
    std::cout << "Intern can not find form " << name << std::endl;
    this->freeForms();
    throw Intern::FormNotFound();
}

void Intern::freeForms()
{
    for (int i = 0; i < 3; i++)
        delete this->forms[i];
}

Intern::~Intern()
{
}
