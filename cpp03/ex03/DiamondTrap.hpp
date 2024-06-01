/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:46:57 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/14 16:46:26 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap &other);
		DiamondTrap(std::string name);
		void	WhoAmI();
		void	attack(const std::string &target);
		DiamondTrap	&operator=(const DiamondTrap &src);
	private:
		std::string	_name;
};

#endif