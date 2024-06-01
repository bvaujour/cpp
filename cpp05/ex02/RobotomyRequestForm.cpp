/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:07:54 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/04 15:04:41 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", "Default", 72, 45)
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("RobotomyRequestForm", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCpy): AForm(toCpy)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &toCpy)
{
	this->AForm::operator=(toCpy);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	std::srand(std::time(NULL));
	if (getSigned() == false)
		throw(NotSignedException());
	if (executor.getGrade() > getGradeToExc())
		throw(Bureaucrat::GradeTooLowException());
	if (std::rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm &toShow)
{
	o << toShow.getName() << "\ntarget: " << toShow.getTarget() << "\nGrade to sign: " << toShow.getGradeToSign() << "\nGrade to exc: " << toShow.getGradeToExc() << "\nsigned: " << toShow.getSigned() << std::endl;
	return (o); 
}
