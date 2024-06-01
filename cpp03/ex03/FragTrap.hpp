/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:55:34 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/14 16:43:12 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap	&operator=(const FragTrap &src);
		FragTrap();
		~FragTrap();
		FragTrap(const std::string &name);
		FragTrap(FragTrap &src);
		void	highFivesGuys();
};
#endif