/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/24 16:32:39 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/24 22:18:37 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP


#include "Form.hpp"
#include <string>
#include <exception>

class Intern
{
    private:
        Form *forms[3];
    public:
        Intern();
        Intern(Intern const &other);
        Intern& operator = (Intern const &other);
        class FormNotFound: public std::exception
        {
            virtual const char* what() const throw();
        };
        Form* makeForm(std::string name, std::string target);
        void freeForms();
        virtual ~Intern();
};

#endif
