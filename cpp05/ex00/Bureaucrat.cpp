/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:24 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/03 17:38:36 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	std::cout << "Name and Grade Bureaucrat constructor called" << std::endl;
	if (_grade > 150)
		throw (GradeTooLowException());
	else if (_grade < 1)
		throw (GradeTooHighException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCpy): _name(toCpy._name), _grade(toCpy._grade)
{
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &toCpy)
{
	std::cout << "Bureaucrat operator = called" << std::endl;
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
