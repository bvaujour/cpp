/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:02:31 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/10 11:38:33 by bvaujour         ###   ########.fr       */
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

bool	Fixed::operator >(const Fixed &src) const
{
	if (nb > src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator >=(const Fixed &src) const
{
	if (nb >= src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator <(const Fixed &src) const
{
	if (nb < src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator <=(const Fixed &src) const
{
	if (nb <= src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator ==(const Fixed &src) const
{
	if (nb == src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator !=(const Fixed &src) const
{
	if (nb != src.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator +(const Fixed &src) const
{
	Fixed	a(toFloat() + src.toFloat());
	
	return (a);
}

Fixed	Fixed::operator -(const Fixed &src) const
{
	
	Fixed	a(toFloat() - src.toFloat());
	
	return (a);
}

Fixed	Fixed::operator *(const Fixed &src) const
{
	
	Fixed	a(toFloat() * src.toFloat());
	
	return (a);
}

Fixed	Fixed::operator /(const Fixed &src) const
{
	
	Fixed	a(toFloat() / src.toFloat());
	
	return (a);
}

Fixed	Fixed::operator ++(int)
{
	Fixed	tmp;

	tmp = *this;
	this->nb++;
	return (tmp);
}

Fixed&	Fixed::operator ++(void)
{
	this->nb++;
	return (*this);
}

Fixed	Fixed::operator --(int)
{
	Fixed	tmp;

	tmp = *this;
	this->nb--;
	return (tmp);
}

Fixed&	Fixed::operator --(void)
{
	this->nb--;
	return (*this);
}

Fixed&	Fixed::min(Fixed &src1, Fixed &src2)
{
	if (src1 < src2)
		return (src1);
	return (src2);
}

Fixed&	Fixed::max(Fixed &src1, Fixed &src2)
{
	if (src1 > src2)
		return (src1);
	return (src2);
}

Fixed	Fixed::min(const Fixed &src1, const Fixed &src2)
{
	if (src1 < src2)
		return (src1);
	return (src2);
}

Fixed	Fixed::max(const Fixed &src1, const Fixed &src2)
{
	if (src1 > src2)
		return (src1);
	return (src2);
}