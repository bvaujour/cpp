/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:30:05 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/14 16:44:05 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap	&operator=(const ScavTrap &src);
		ScavTrap();
		~ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(ScavTrap &src);
		void	attack(const std::string &target);
		void	guardGate();
};
#endif