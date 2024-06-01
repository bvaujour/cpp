/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:45:50 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/04 16:59:21 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;

class	AForm
{
	public:
		AForm();
		AForm(const std::string &name, const std::string &target, const int grade_to_sign, const int grade_to_exc);
		AForm(const AForm &toCpy);
		AForm	&operator=(const AForm &toCpy);
		virtual ~AForm();
		const std::string	getName() const;
		bool				getSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExc() const;
		std::string			getTarget() const;
		void				beSigned(Bureaucrat &worker);
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
		class	NotSignedException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		virtual void		execute(Bureaucrat const &executor) const = 0;
	private:
		const std::string	_name;
		std::string			_target;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExc;
};

std::ostream	&operator<<(std::ostream &o, AForm &toShow);