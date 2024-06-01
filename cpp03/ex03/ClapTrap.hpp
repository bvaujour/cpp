/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:17:59 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/20 15:27:12 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(ClapTrap &src);
		virtual	~ClapTrap();

		ClapTrap	&operator=(const ClapTrap &src);
		
		std::string	getName() const;
		int			getHp() const;
		int			getEp() const;
		int			getAd() const;
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		displayStats();
	protected:
		std::string	_name;
		int			_hp;
		int			_ep;
		int			_ad;
};

#endif