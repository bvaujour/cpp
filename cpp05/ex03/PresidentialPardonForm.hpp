/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:08:16 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/04 14:45:22 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &toCpy);
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(PresidentialPardonForm &toCpy);
		void	execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm &toShow);
