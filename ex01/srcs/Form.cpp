/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:57:18 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/22 15:20:36 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form() : _name("Mike"), _signed(0), _gradeExecute(50), _gradeSign(10)
{
}

Form::Form(std::string name, int gradeExecute, int gradeSign)
	: _name(name), _signed(0), _gradeExecute(gradeExecute), _gradeSign(gradeSign)
{
	if (_gradeExecute < 1 || _gradeSign < 1)
		throw Form::GradeTooHighException();
	if (_gradeExecute > 150 || _gradeSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& copy)
	: _name(copy._name), _signed(copy._signed), _gradeExecute(copy._gradeExecute), _gradeSign(copy._gradeSign)
{
	*this = copy;
}

Form&	Form::operator=(const Form& copy)
{
	if (this != &copy)
	{
		_signed = copy._signed;
	}
	return (*this);
}

Form::~Form()
{
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too High");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too Low");
}

std::string	Form::getName() const
{
	return (_name);
}

bool	Form::isSigned() const
{
	return (_signed);
}

void	Form::beSigned(const Bureaucrat& random)
{
	if (random.getGrade() <= _gradeSign)
		_signed = 1;
	else
		throw Form::GradeTooLowException();
}

int	Form::getGradeToExecute() const
{
	return (_gradeExecute);
}

int	Form::getGradeToSign() const
{
	return (_gradeSign);
}

std::ostream&	operator<<(std::ostream& os, const Form& copy)
{
	os << copy.getName() << ", Form grade is signed " << copy.isSigned() << ".";
	return (os);
}
