/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:42:23 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/16 15:52:05 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

 #include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal& toCpy);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal &toCpy);
		std::string getType() const;
		void		setType(const std::string& newType);
		void        makeSound() const;
	protected:
		std::string	_type;
};

#endif