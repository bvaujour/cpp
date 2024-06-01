/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:44:25 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/20 17:25:56 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name) : _name(name) , _hp(100)
{
	unsigned int	i;

	i = -1;
	//std::cout << "Character default constructor called with name: " << _name << std::endl;
	while (++i < 4)
		_slots[i] = NULL;
	_bag = new AMateria*[1];
	_bag[0] = NULL;
}

Character::Character(const Character& toCpy)
{
	unsigned int	i;

	i = 0;
	//std::cout << "Character copy constructor called" << std::endl;
	while (i < 4)
	{
		_slots[i] = NULL;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (toCpy._slots[i] != NULL)
			_slots[i] = toCpy._slots[i]->clone();
		i++;
	}
	i = 0;
	while (toCpy._bag[i])
		i++;
	_bag = new AMateria*[i + 1];
	i = 0;
	while (toCpy._bag[i])
	{
		_bag[i] = toCpy._bag[i]->clone();
		i++;
	}
	_bag[i] = NULL;
	_name = toCpy._name;
	_hp = toCpy._hp;;
}

Character::~Character()
{
	unsigned int	i;

	i = 0;
	//std::cout << "Character destructor called on: " << _name << std::endl;
	while (i < 4)
	{
		if (_slots[i] != NULL)
			delete _slots[i];
		i++;
	}
	i = 0;
	while (_bag[i])
	{
		delete _bag[i];
		i++;
	}
	delete[] _bag;
}

Character&	Character::operator=(const Character& toCpy)
{
	unsigned int	i;

	i = 0;
	//std::cout << "Character operator = called" << std::endl;
	while (i < 4)
	{
		if (_slots[i] != NULL)
		{
			delete _slots[i];
			_slots[i] = NULL;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (toCpy._slots[i] != NULL)
			_slots[i] = toCpy._slots[i]->clone();
		i++;
	}
	i = 0;
	while (_bag[i])
	{
		delete _bag[i];
		i++;
	}
	delete[] _bag;
	i = 0;
	while (toCpy._bag[i])
		i++;
	_bag = new AMateria*[i + 1];
	i = 0;
	while (toCpy._bag[i])
	{
		_bag[i] = toCpy._bag[i]->clone();
		i++;
	}
	_bag[i] = NULL;
	_name = toCpy._name;
	_hp = toCpy._hp;
	return (*this);
}

std::string const& Character::getName() const
{
	return (_name);
}

void	Character::showStats()
{
	unsigned int	i;

	i = 0;
	std::cout << "\nName: " << _name << std::endl;
	std::cout << "Health Points: " << _hp << "/100\n" << std::endl;
	std::cout << "Equiped:" << std::endl;
	while (i < 4)
	{
		if (_slots[i] != NULL)
		{
			std::cout << "\tslot " << i << ": " << _slots[i]->getType() << " ";
			_slots[i]->printInfos();
		}
		else
			std::cout << "\tslot " << i << ": Empty" << std::endl;
		i++;
	}
	std::cout << "\nInventory:" << std::endl;
	i = 0;
	while (_bag[i])
	{
		if (_bag[i] != NULL)
		{
			std::cout << "\tslot " << i << ": " << _bag[i]->getType() << " ";
			_bag[i]->printInfos();
		}
		else
			std::cout << "\tslot " << i << ": Empty" << std::endl;
		i++;
	}
	std::cout << "\n" << std::endl;
}

void	Character::equip(AMateria* m)
{
	unsigned int	i;

	i = 0;
	if (m == NULL)
		return ;
	while (i < 4)
	{
		if (_slots[i] == m)
		{
			std::cout << "Materia " << m->getType() << " already equiped" << std::endl;
			return ;
		}
		if (_slots[i] == NULL)
		{
			_slots[i] = m;
			std::cout << m->getType() << " equiped on slot " << i << std::endl;
			return ;
		}
		i++;
	}
	i = 0;
	std::cout << "No more slot to equip " << m->getType() << ", stocked in Inventory" << std::endl;
	while (_bag[i])
	{
		if (_bag[i] == m)
		{
			std::cout << "Materia already in Inventory" << std::endl;
			return ;
		}
		i++;
	}
	putInBag(m);
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (_slots[idx] != NULL)
		{
			putInBag(_slots[idx]);
			_slots[idx] = NULL;
		}
	}
	else
		std::cout << _name << " has 4 Materia slots, use 0 to 3 to unequip" << std::endl; 
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _slots[idx] != NULL)
		_slots[idx]->use(target);
	else
		std::cout << "No Materia equiped on slot " << idx << std::endl;
}

void	Character::updateHealthPoints(int delta)
{
	if (_hp > 0)
	{
		_hp = _hp + delta;
		if (_hp <= 0)
			std::cout << _name << " died" << std::endl;
	}
	else
		std::cout << _name << " is dead" << std::endl;
}

void	Character::putInBag(AMateria *toPut)
{
	int			i;
	AMateria	**newBag;

	i = 0;
	while (_bag[i])
		i++;
	newBag = new AMateria*[i + 2];
	i = 0;
	while (_bag[i])
	{
		newBag[i] = _bag[i];
		i++;
	}
	newBag[i] = toPut;
	newBag[i + 1] = NULL;
	delete[] _bag;
	_bag = newBag;
}
