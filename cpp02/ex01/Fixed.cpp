/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:02:31 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/27 14:14:53 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fbits = 8;

Fixed::Fixed()
{
	nb = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int &i_param)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(i_param << fbits);
}

Fixed::Fixed(const float &f_param)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(f_param * (1 << fbits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return((float)nb / (1 << this->fbits));
}

int	Fixed::getRawBits(void) const
{
	return (nb);
}
void Fixed::setRawBits(int const raw)
{
	nb = raw;
}


int Fixed::toInt(void) const
{
	return (nb >> fbits);
}

Fixed &Fixed::operator =(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		nb = src.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Fixed &src)
{
	o << src.toFloat();
	return (o);
}
