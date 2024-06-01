/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:14:53 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/16 14:46:31 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	public:
						Dog();
						Dog(const Dog &toCpy);
						~Dog();
		void			makeSound() const;
		Brain*			getBrain() const;
		Dog&			operator=(const Dog &toCpy);
	private:
		Brain*			_brain;
};

#endif