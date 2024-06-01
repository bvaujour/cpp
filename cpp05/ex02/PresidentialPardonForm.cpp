/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:08:37 by bvaujour          #+#    #+#             */
/*   Updated: 2024/04/04 15:04:33 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", "Default", 25, 5)
{
}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("PresidentialPardonForm", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &toCpy) : AForm(toCpy)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getSigned() == false)
		throw(NotSignedException());
	if (executor.getGrade() > getGradeToExc())
		throw(Bureaucrat::GradeTooLowException());
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm &toShow)
{
	o << toShow.getName() << "\ntarget: " << toShow.getTarget() << "\nGrade to sign: " << toShow.getGradeToSign() << "\nGrade to exc: " << toShow.getGradeToExc() << "\nsigned: " << toShow.getSigned() << std::endl;
	return (o); 
}
