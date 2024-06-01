/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:51:19 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/20 17:27:02 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

AMateria::AMateria()
{
	//std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	//std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& toCpy)
{
	*this = toCpy;
}

AMateria::~AMateria()
{
	//std::cout << "AMateria default destructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& toCpy)
{
	//std::cout << "AMateria operator = called" << std::endl;
	_type = toCpy._type;
	_deltaHp = toCpy._deltaHp;
	_level = toCpy._level;
	_xp = toCpy._xp;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	(void) target;
}

void	AMateria::printInfos(void)
{

}