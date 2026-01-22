/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:29:11 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/21 19:56:51 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeExecute;
	const int			_gradeSign;
public:
	Form();
	Form(std::string name, int gradeExecute, int gradeSign);
	Form(const Form& copy);
	~Form();
	Form&	operator=(const Form& copy);
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	std::string	getName() const;
	bool		isSigned() const;
	void		beSigned(const Bureaucrat& random);
	int			getGradeToExecute() const;
	int			getGradeToSign() const;
};

std::ostream&	operator<<(std::ostream& os, const Form& copy);

#endif
