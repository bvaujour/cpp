/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:47:58 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/20 17:19:10 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# include <iostream>

class ICharacter;
class ACharacter;


class AMateria
{
	protected:
		std::string	_type;
		int	_deltaHp;
		int	_level;
		int	_xp;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& toCpy);
		virtual	~AMateria();
		AMateria&	operator=(const AMateria& toCpy);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		virtual void printInfos(void);
};
