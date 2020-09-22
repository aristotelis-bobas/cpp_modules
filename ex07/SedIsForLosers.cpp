/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SedIsForLosers.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/09 15:02:31 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 16:07:56 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

SedIsForLosers::SedIsForLosers(char const *file, char const *find, char const *replace)
				: file_(file), find_(find), replace_(replace)
{
	if (find_.length() < 1 || replace_.length() < 1)
		throw "Invalid argument";
	file_in_.open(file_.c_str(), std::ios::in);
	if (!file_in_.is_open())
		throw "File does not exist";
	file_out_.open(file_.append(".replace").c_str(), std::ios::out | std::ios::trunc);
	if (!file_out_.is_open())
		throw "Creating file failed";
}

void SedIsForLosers::replace()
{
	std::string	line;
	while (file_in_.good())
	{
		std::getline(file_in_, line);
		size_t pos = line.find(find_);
		while (pos != std::string::npos)
		{
			line.replace(pos, find_.length(), replace_);
			pos = line.find(find_, pos + replace_.length());
		}
		file_out_ << line;
		if (file_in_.good())
			file_out_ << std::endl;
	}
	file_in_.close();
	file_out_.close();
}
