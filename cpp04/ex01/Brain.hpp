/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:07:29 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/17 12:25:14 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	public:
		Brain();
		Brain(Brain& toCpy);
		~Brain();
		Brain&	operator=(const Brain& toCpy);
		std::string* getIdeas();
		void	showIdeas();
		void	setIdeas(std::string idea);
	private:
		std::string	_ideas[100];
};

#endif