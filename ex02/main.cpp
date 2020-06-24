/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 15:05:51 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/24 14:12:54 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
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
			Bureaucrat joe("Joe", 3);
			ShrubberyCreationForm a("home");
			PresidentialPardonForm b("Donald Trump");
			RobotomyRequestForm c("alien planet");
			std::cout << joe << a << b << c;
			joe.signForm(a);
			joe.executeForm(a);
			joe.signForm(b);
			joe.executeForm(b);
			joe.signForm(c);
			joe.executeForm(c);
			
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
