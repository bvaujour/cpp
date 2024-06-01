/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:24 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/03 17:45:40 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	if (_grade > 150)
		throw (GradeTooLowException());
	else if (_grade < 1)
		throw (GradeTooHighException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCpy): _name(toCpy._name),  _grade(toCpy._grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &toCpy)
{
	_grade = toCpy._grade;
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::upgrade()
{
	if (_grade - 1 < 1)
		throw (GradeTooHighException());
	_grade--;
}

void	Bureaucrat::downgrade()
{
	if (_grade + 1 > 150)
		throw (GradeTooLowException());
	_grade++;
}

void	Bureaucrat::signForm(AForm &contrat)
{
	try
	{
		contrat.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " could'nt sign Form because " << e.what() << std::endl;
	}
	
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " could'nt execute Form because " << e.what() << std::endl;
	}
	
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat: Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat: Grade too low");
}


std::ostream	&operator<<(std::ostream &ostd, Bureaucrat &toShow)
{
	ostd << toShow.getName() << ": Bureaucrat with grade " << toShow.getGrade();
	return (ostd);
}
