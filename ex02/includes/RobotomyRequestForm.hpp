/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:53:55 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/22 16:58:11 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "ShrubberyCreationForm.hpp"

class RobotomyRequestForm : public AForm
{
protected:
	virtual void	executeAction() const;
private:
	const	std::string	_target;
public:
	RobotomyRequestForm(const std::string&	target);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& copy);
	virtual ~RobotomyRequestForm();
	std::string	getTarget() const;
};

#endif
