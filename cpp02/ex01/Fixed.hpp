/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:02:49 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/10 11:30:59 by bvaujour         ###   ########.fr       */
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
	private:
		int	nb;
		static const int fbits;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif