/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:56:21 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/25 15:05:19 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("Default_Aform"), _target("none"), _signed(false), _gradeToSign(150), _gradeToExc(150)
{
}

AForm::AForm(const std::string &name, const std::string &target, const int grade_to_sign, const int grade_to_exc): _name(name), _target(target), _signed(false), _gradeToSign(grade_to_sign), _gradeToExc(grade_to_exc)
{
	if (_gradeToSign < 1 || _gradeToExc < 1)
		throw(GradeTooHighException());
	else if (_gradeToSign > 150 || _gradeToExc > 150)
		throw(GradeTooLowException());
}

AForm::AForm(const AForm &toCpy): _name(toCpy._name), _target(toCpy._target), _signed(toCpy._signed), _gradeToSign(toCpy._gradeToSign), _gradeToExc(toCpy._gradeToExc)
{
}

AForm	&AForm::operator=(const AForm &toCpy)
{
	_signed = toCpy._signed;
	_target = toCpy._target;
	return *this;
}

AForm::~AForm()
{
}

const std::string	AForm::getName() const
{
	return(_name);
}

std::string	AForm::getTarget() const
{
	return(_target);
}

bool	AForm::getSigned() const
{
	return(_signed);
}

int	AForm::getGradeToSign() const
{
	return(_gradeToSign);
}

int	AForm::getGradeToExc() const
{
	return(_gradeToExc);
}

void		AForm::beSigned(Bureaucrat &worker)
{
	if (worker.getGrade() > _gradeToSign)
		throw (GradeTooHighException());
	std::cout << worker.getName() << " signed " << _name << std::endl;
	_signed = true;
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("AForm: Grade too high");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("AForm: Grade too low");
}

const char	*AForm::NotSignedException::what() const throw()
{
	return ("AForm: Form not signed");
}

std::ostream	&operator<<(std::ostream &o, AForm &toShow)
{
	o << "\nAForm: " << toShow.getName() << "\nGrade to sign: " << toShow.getGradeToSign() << "\nGrade to exc: " << toShow.getGradeToExc() << "\nsigned: " << toShow.getSigned() << std::endl;
	return (o); 
}
