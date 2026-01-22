/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:29:11 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/22 11:27:23 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
protected:
	virtual void	executeAction() const = 0;
	AForm(std::string name, int gradeExecute, int gradeSign);
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeExecute;
	const int			_gradeSign;
public:
	AForm();
	AForm(const AForm& copy);
	virtual ~AForm();
	AForm&	operator=(const AForm& copy);
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
	class GradeNotSigned : public std::exception
	{
		public:
			const char* what() const throw();
	};
	std::string		getName() const;
	bool			isSigned() const;
	void			beSigned(const Bureaucrat& random);
	void			execute(const Bureaucrat& executor) const;
	int				getGradeToExecute() const;
	int				getGradeToSign() const;
};

std::ostream&	operator<<(std::ostream& os, const AForm& copy);

#endif
