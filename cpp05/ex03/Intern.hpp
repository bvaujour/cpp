/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:29:09 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/30 16:13:14 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &toCpy);
		~Intern();
		Intern	&operator=(const Intern &toCpy);
		AForm	*MakeForm(std::string formCall, std::string formTarget);
		class	NoExistingForm : public std::exception
		{
			virtual const char	*what() const throw();
		};
	private:
};