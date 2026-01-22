/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:29:03 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/22 17:05:59 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& copy);
	Intern&	operator=(const Intern& copy);
	~Intern();
	class InexistantForm : public std::exception
	{
		public:
			const char* what() const throw();
	};
	AForm	*makeForm(std::string name, std::string target);
};

#endif
