/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:31:21 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/16 15:38:16 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

 #include <iostream>

class	Animal
{
	public:
		Animal();
		Animal(Animal& toCpy);
		virtual ~Animal();
		Animal& operator=(const Animal &toCpy);
		std::string getType() const;
		void		setType(const std::string& newType);
		virtual void	makeSound() const;
	protected:
		std::string	_type;
};

#endif