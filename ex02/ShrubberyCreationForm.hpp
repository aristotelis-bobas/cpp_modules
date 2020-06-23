/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/23 16:37:01 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/23 22:13:34 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Form
{
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &other);
        ShrubberyCreationForm& operator = (ShrubberyCreationForm const &other);
        void execute(Bureaucrat const &executor) const;
        ~ShrubberyCreationForm();
};

#endif
