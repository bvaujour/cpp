/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:07:45 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/04 14:45:05 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &toCpy);
		~RobotomyRequestForm();
		void	execute(Bureaucrat const &executor) const;
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &toCpy);
};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm &toShow);
