/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:06:06 by bvaujour          #+#    #+#             */
/*   Updated: 2023/11/16 16:00:47 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	public:
						Cat();
						Cat(const Cat &toCpy);
						~Cat();
		virtual void	makeSound() const;
		Brain*			getBrain() const;
		Cat&			operator=(const Cat &toCpy);
	private:
		Brain*			_brain;
};

#endif