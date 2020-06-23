/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberycreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/23 16:36:59 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/23 22:21:49 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
    Form("ShrubberyCreationForm", target, 145, 137)
{   
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other):
    Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecuteGrade())
{    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (ShrubberyCreationForm const &other)
{
    this->setStatus(other.getStatus());
    this->setTarget(other.getTarget());
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    this->Form::execute(executor);
    std::ofstream file;
    file.open(this->getTarget().c_str(), std::ios::out | std::ios::trunc);
    file <<  
    
    
"                                                           \n"
"                                                 .         \n"
"                                   .         ;             \n"
"      .              .              ;%     ;;              \n"
"        .           .                :;%  %;               \n"
"         :         ;                   :;%;'     ..        \n"
"..        %;     %;            ;        %;'    .;          \n"
"  ;       ;%;  %%;        .     %;    ;%;    .%'           \n"
"   %;       %;%;      .  ;       %;  ;%;   .%;'            \n"
"    ;%;      %;        ;%;        % ;%;  .%;'              \n"
"     .%;.     ;%;     %;'         .;%%;.%;'                \n"
"      .:;%.    ;%%. %@;        %; ;@%;%'                   \n"
"         .:%;.  :;bd%;          %;@%;'                     \n"
"           .@%:.  :;%.         ;@@%;'                      \n"
"             .@%.  .;@%.      ;@@%;                        \n"
"               .@%%. .@%%    ;@@%;                         \n"
"                 ;@%. :@%%  %@@%;                          \n"
"                   %@bd%%%bd%%:;                           \n"
"                     #@%%%%%:;;                            \n"
"                     %@@%%%::;                             \n"
"                     %@@@%(o);  . '                        \n"
"                     %@@@o%;:(..'                          \n"
"                 ... %@@@o%::;                             \n"
"                    .)@@@o%::;                             \n"
"                     %@@(o)::;                             \n"
"                    .%@@@@%::;                             \n"
"                    ;%@@@@%::;.                            \n"
"                   ;%@@@@%%:;;;.                           \n"
"               ...;%@@@@@%%:;;;;...                        \n"      
"                                                           \n"
"---------------------------------------------------------- \n"
"                                                           \n"
"                                                 .         \n"
"                                   .         ;             \n"
"      .              .              ;%     ;;              \n"
"        .           .                :;%  %;               \n"
"         :         ;                   :;%;'     ..        \n"
"..        %;     %;            ;        %;'    .;          \n"
"  ;       ;%;  %%;        .     %;    ;%;    .%'           \n"
"   %;       %;%;      .  ;       %;  ;%;   .%;'            \n"
"    ;%;      %;        ;%;        % ;%;  .%;'              \n"
"     .%;.     ;%;     %;'         .;%%;.%;'                \n"
"      .:;%.    ;%%. %@;        %; ;@%;%'                   \n"
"         .:%;.  :;bd%;          %;@%;'                     \n"
"           .@%:.  :;%.         ;@@%;'                      \n"
"             .@%.  .;@%.      ;@@%;                        \n"
"               .@%%. .@%%    ;@@%;                         \n"
"                 ;@%. :@%%  %@@%;                          \n"
"                   %@bd%%%bd%%:;                           \n"
"                     #@%%%%%:;;                            \n"
"                     %@@%%%::;                             \n"
"                     %@@@%(o);  . '                        \n"
"                     %@@@o%;:(..'                          \n"
"                 ... %@@@o%::;                             \n"
"                    .)@@@o%::;                             \n"
"                     %@@(o)::;                             \n"
"                    .%@@@@%::;                             \n"
"                    ;%@@@@%::;.                            \n"
"                   ;%@@@@%%:;;;.                           \n"
"               ...;%@@@@@%%:;;;;...                        \n"      
"                                                           \n"
"---------------------------------------------------------- \n"
 << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
