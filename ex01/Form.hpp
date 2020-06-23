/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 18:30:10 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/22 20:27:51 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <exception>
#include <ostream>

class Bureaucrat;

class Form
{
	private:
		bool status;
		const std::string name;
		const int sign_grade;
		const int execute_grade;
	public:
		Form(std::string name, int sign_grade, int execute_grade);
		Form(Form const &other);
		Form& operator = (Form const &other);
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		bool getStatus() const;
		void updateStatus();
		std::string getName() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		void beSigned(Bureaucrat &bureaucrat);
		~Form();
};

std::ostream& operator << (std::ostream &out, Form const &src);

#endif
