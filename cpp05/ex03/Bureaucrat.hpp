/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:00 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/29 12:19:40 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"

class	AForm;

class	Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &toCpy);
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat	&operator=(const Bureaucrat &toCpy);
		~Bureaucrat();
		const std::string	getName() const;
		int					getGrade() const;
		void				upgrade();
		void				downgrade();
		void				signForm(AForm &contrat);
		void				executeForm(AForm const &form);
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
	private:
		std::string	const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &ostd, Bureaucrat &toShow);