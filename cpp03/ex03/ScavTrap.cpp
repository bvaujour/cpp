/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:33:03 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/14 16:48:13 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_ep = 50;
}

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "ScavTrap Name Edit constructor called" << std::endl;
	_name = name;
	_ep = 50;
}

ScavTrap::ScavTrap(ScavTrap &src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (_hp > 0)
		std::cout << "ScavTrap " << _name << " said Hodor !" << std::endl;
	else
		std::cout << "ScavTrap " << _name << "can't enter Guard mode will dead" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_hp > 0 && _ep > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
		_ep--;
	}
	else if (_ep == 0)
		std::cout << "Can't attack while out of Energy" << std::endl;
	else
		std::cout << "Can't attack while dead" << std::endl;
}

ScavTrap &ScavTrap::operator =(const ScavTrap &src)
{
	if (this != &src)
	{
		_name = src.getName();
		_hp = src.getHp();
		_ep = src.getEp();
		_ad = src.getAd();
	}
	std::cout << "ScavTrap overrided Operator = used" << std::endl;
	return (*this);
}