/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/23 16:36:49 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/29 13:31:53 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &other);
        PresidentialPardonForm& operator = (PresidentialPardonForm const &other);
        void execute(Bureaucrat const &executor) const;
        virtual ~PresidentialPardonForm();
};

#endif
