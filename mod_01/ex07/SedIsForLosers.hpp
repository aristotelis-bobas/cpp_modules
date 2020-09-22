/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SedIsForLosers.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/09 15:00:33 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 15:41:16 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDISFORLOSERS_HPP
#define SEDISFORLOSERS_HPP

#include <string>
#include <fstream>

class SedIsForLosers
{
	public:

	SedIsForLosers(char const *file, char const *find, char const *replace);
	void replace();
	
	private:

	std::string		file_;
	std::string		find_;
	std::string		replace_;
	std::ifstream	file_in_;
	std::ofstream	file_out_;
};

#endif
