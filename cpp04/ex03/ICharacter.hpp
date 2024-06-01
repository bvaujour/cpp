/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:36:21 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/20 17:22:01 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "AMateria.hpp"

class	ICharacter
{
	public:
		virtual			~ICharacter() {}
		virtual 		std::string const & getName() const = 0;
		virtual void 	equip(AMateria* m) = 0;
		virtual void 	unequip(int idx) = 0;
		virtual void 	use(int idx, ICharacter& target) = 0;
};
