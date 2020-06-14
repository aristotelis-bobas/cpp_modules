/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/14 15:38:41 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/14 18:02:41 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

class Fixed
{
private:
	int	value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(Fixed& src);
	~Fixed();
	void operator=(Fixed& src);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
