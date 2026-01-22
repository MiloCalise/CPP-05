/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:57:18 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/22 11:31:55 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

AForm::AForm() : _name("Mike"), _signed(0), _gradeExecute(50), _gradeSign(10)
{
}

AForm::AForm(std::string name, int gradeExecute, int gradeSign)
	: _name(name), _signed(0), _gradeExecute(gradeExecute), _gradeSign(gradeSign)
{
	if (_gradeExecute < 1 || _gradeSign < 1)
		throw AForm::GradeTooHighException();
	if (_gradeExecute > 150 || _gradeSign > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& copy)
	: _name(copy._name), _signed(copy._signed), _gradeExecute(copy._gradeExecute), _gradeSign(copy._gradeSign)
{
	*this = copy;
}

AForm&	AForm::operator=(const AForm& copy)
{
	if (this != &copy)
	{
		_signed = copy._signed;
	}
	return (*this);
}

AForm::~AForm()
{
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too High");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too Low");
}

const char	*AForm::GradeNotSigned::what() const throw()
{
	return ("Form isn't signed");
}

std::string	AForm::getName() const
{
	return (_name);
}

bool	AForm::isSigned() const
{
	return (_signed);
}

void	AForm::beSigned(const Bureaucrat& random)
{
	if (random.getGrade() <= _gradeSign)
		_signed = 1;
	else
		throw AForm::GradeTooLowException();
}

int	AForm::getGradeToExecute() const
{
	return (_gradeExecute);
}

int	AForm::getGradeToSign() const
{
	return (_gradeSign);
}

std::ostream&	operator<<(std::ostream& os, const AForm& copy)
{
	os << copy.getName() << ", AForm grade is signed " << copy.isSigned() << ".";
	return (os);
}

void	AForm::executeAction() const
{

}

void	AForm::execute(const Bureaucrat& executor) const
{
	if (!isSigned())
		throw AForm::GradeNotSigned();
	else if (executor.getGrade() > _gradeExecute)
		throw AForm::GradeTooLowException();
	else
		executeAction();
}
