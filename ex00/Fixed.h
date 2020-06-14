/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/14 15:38:41 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/14 15:59:53 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
private:
	int	fixed_point_value_;
	static const int bits = 8;
public:
	Fixed();
	Fixed(Fixed& src);
	~Fixed();
	void operator=(Fixed& src);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

