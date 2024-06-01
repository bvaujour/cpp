/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:02:49 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/10 10:43:56 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int &i_param);
		Fixed(const float &f_param);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed&	operator =(const Fixed &src);
		bool	operator >(const Fixed &src) const;
		bool	operator >=(const Fixed &src) const;
		bool	operator <(const Fixed &src) const;
		bool	operator <=(const Fixed &src) const;
		bool	operator ==(const Fixed &src) const;
		bool	operator !=(const Fixed &src) const;
		Fixed	operator +(const Fixed &src) const;
		Fixed	operator -(const Fixed &src) const;
		Fixed	operator *(const Fixed &src) const;
		Fixed	operator /(const Fixed &src) const;
		Fixed	operator ++(int);
		Fixed&	operator ++(void);
		Fixed	operator --(int);
		Fixed&	operator --(void);
		static Fixed&	min(Fixed &src1, Fixed &src2);
		static Fixed&	max(Fixed &src1, Fixed &src2);
		static Fixed	min(const Fixed &src1, const Fixed &src2);
		static Fixed	max(const Fixed &src1, const Fixed &src2);
	private:
		int	nb;
		static const int fbits;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif