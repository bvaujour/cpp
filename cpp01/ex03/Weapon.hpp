/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:54:29 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/16 09:58:41 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	public:
		Weapon();
		Weapon(const std::string& name);
		~Weapon();
		void				setType(const std::string& name);
		const std::string&	getType() const;
	private:
		std::string 		_type;
};

#endif