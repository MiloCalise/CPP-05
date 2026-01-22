/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:53:24 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/22 16:58:02 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
protected:
	virtual void	executeAction() const;
private:
	const	std::string	_target;
public:
	ShrubberyCreationForm(const std::string&	target);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& copy);
	virtual ~ShrubberyCreationForm();
	std::string	getTarget() const;
};

#endif
