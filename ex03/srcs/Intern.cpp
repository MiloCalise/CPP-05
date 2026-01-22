/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:29:58 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/22 16:59:17 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

const char	*Intern::InexistantForm::what() const throw()
{
	return ("Form is invalid");
}

static AForm	*createPresident(std::string target)
{
	return new PresidentialPardonForm(target);
}

static AForm	*createRobot(std::string target)
{
	return new RobotomyRequestForm(target);
}

static AForm	*createBery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = {
		"PresidentialPardonForm",
		"RobotomyRequestForm",
		"ShrubberyCreationForm"
	};
	AForm	*(*create[3])(std::string) = {
		&createPresident,
		&createRobot,
		&createBery
	};
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return create[i](target);
		}
	}
	throw Intern::InexistantForm();
}
