/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:08:04 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/22 15:19:45 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

Bureaucrat::Bureaucrat() : _name("Mike"), _grade(50)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this != &copy)
	{
		this->_grade = copy._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::decrementGrade()
{
	if ((_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void	Bureaucrat::incrementGrade()
{
	if ((_grade - 1) < 1)
			throw Bureaucrat::GradeTooHighException();
		_grade--;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& copy)
{
	os << copy.getName() << ", bureaucrat grade " << copy.getGrade() << ".";
	return (os);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

void	Bureaucrat::signForm(AForm& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << _name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << _name << " couldn’t sign " << f.getName()
			<< " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const AForm& form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << _name << " couldn’t execute " << form.getName()
			<< " because " << e.what() << std::endl;
	}
}
