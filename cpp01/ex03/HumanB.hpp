/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:32:33 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/16 10:04:33 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(const std::string& name);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon& type);
	private:
		std::string	_name;
		Weapon			*_type;
};

#endif