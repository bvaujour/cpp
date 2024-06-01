/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:28:49 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/18 18:15:30 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& toCpy);
		MateriaSource&	operator=(const MateriaSource& toCpy);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria	*_learned[4];
};