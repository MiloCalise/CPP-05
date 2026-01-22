/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:54:31 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/22 16:58:20 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "RobotomyRequestForm.hpp"

class PresidentialPardonForm : public AForm
{
protected:
	virtual void	executeAction() const;
private:
	const	std::string	_target;
public:
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& copy);
	virtual ~PresidentialPardonForm();
	std::string	getTarget() const;
};

#endif
