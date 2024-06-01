/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:45:07 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/20 17:28:39 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	i;

	i = 0;
	//std::cout << "MateriaSource default constructor called" << std::endl;
	while (i < 4)
	{
		_learned[i] = NULL;
		i++;
	}
}

MateriaSource::~MateriaSource()
{
	int	i;

	i = 0;
	//std::cout << "MateriaSource default destructor called" << std::endl;
	while (i < 4)
	{
		if (_learned[i] != NULL)
			delete _learned[i];
		i++;
	}
}
MateriaSource::MateriaSource(const MateriaSource& toCpy)
{
	int	i;

	i = 0;
	//std::cout << "MateriaSource copy constructor called" << std::endl;
	while (i < 4)
	{
		_learned[i] = NULL;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		
		if (toCpy._learned[i] != NULL)
			_learned[i] = toCpy._learned[i]->clone();
		i++;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& toCpy)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (_learned[i] != NULL)
		{
			delete _learned[i];
			_learned[i] = NULL;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (toCpy._learned[i] != NULL)
			_learned[i] = toCpy._learned[i]->clone();
		i++;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *toSave)
{
	int	i;

	i = 0;
	if (toSave == NULL)
		return ;
	while (i < 4)
	{
		if (_learned[i] == toSave)
		{
			std::cout << "MateriaSource already stocked this address" << std::endl;
			return ;
		}
		if (_learned[i] == NULL)
		{
			_learned[i] = toSave;
			std::cout << "Materia source learned " << toSave->getType() <<  std::endl;
			return ;
		}
		i++;
	}
	std::cout << "Materia source has no more slot" << std::endl;
	delete toSave;
	toSave = NULL;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (_learned[i] != NULL)
		{
			if (_learned[i]->getType() == type)
				return (_learned[i]->clone());
		}
		i++;
	}
	std::cout << "No Materia of this type saved" << std::endl;
	return (NULL);
}