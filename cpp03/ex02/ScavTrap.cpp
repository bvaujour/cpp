/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:33:03 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/14 16:14:38 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_class = "ScavTrap";
	_ep = 50;
	_ad = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
	_name = name;
	_class = "ScavTrap";
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "ScavTrap Name Edit constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &src)
{
	*this = src;
	std::cout << "ScavTrap Copy constructor called" << std::endl;
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
		std::cout << "ScavTrap " << _name << "can't enter Guard mode while dead" << std::endl;
}

ScavTrap &ScavTrap::operator =(const ScavTrap &src)
{
	if (this != &src)
	{
		_name = src.getName();
		_class = src.getClass();
		_hp = src.getHp();
		_ep = src.getEp();
		_ad = src.getAd();
	}
	std::cout << _class << " overrided Operator = used" << std::endl;
	return (*this);
}

