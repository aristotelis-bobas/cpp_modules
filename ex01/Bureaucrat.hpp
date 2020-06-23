/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 15:05:45 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/22 20:18:35 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <string>
#include <ostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat& operator = (Bureaucrat const &other);
		int getGrade() const;
		std::string getName() const;
		void promoteGrade();
		void demoteGrade();
		void signForm(Form &form);
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		virtual ~Bureaucrat();
};

std::ostream& operator << (std::ostream &out, Bureaucrat const &src);

#endif
