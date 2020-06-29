/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/22 18:30:10 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/29 13:22:40 by abobas        ########   odam.nl         */
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
		std::string target;
		const int sign_grade;
		const int execute_grade;
	public:
		Form(std::string name, std::string target, int sign_grade, int execute_grade);
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
		class FormNotSigned: public std::exception
		{
			virtual const char* what() const throw();
		};
		class FormAlreadySigned: public std::exception
		{
			virtual const char* what() const throw();
		};
		virtual Form* clone() const = 0;
		bool getStatus() const;
		void setStatus(bool value);
		std::string getName() const;
		std::string getTarget() const;
		void setTarget(std::string target);
		int getSignGrade() const;
		int getExecuteGrade() const;
		void beSigned(Bureaucrat const &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const;
		virtual ~Form();
};

std::ostream& operator << (std::ostream &out, Form const &src);

#endif
