/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 15:05:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/29 13:29:02 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));
	std::cout << std::endl;
	{
		try
		{
			Intern amber;
			Bureaucrat joe("Joe", 3);
			Form* a = amber.makeForm("ShrubberyCreationForm", "home");
			Form* b = amber.makeForm("PresidentialPardonForm", "Donald Trump");
			Form* c = amber.makeForm("RobotomyRequestForm", "alien planet");
			std::cout << joe << *a << *b << *c;
			joe.signForm(*a);
			joe.executeForm(*a);
			joe.signForm(*b);
			joe.executeForm(*b);
			joe.signForm(*c);
			joe.executeForm(*c);
			delete a;
			delete b;
			delete c;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Intern amber;
			Form* a = amber.makeForm("YADAYADAYADA", "ET PHONE HOME");
			std::cout << a->getName() << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
