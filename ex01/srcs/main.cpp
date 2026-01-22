/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:51:52 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/21 20:07:42 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

int	main(void)
{
	Form	contract("contract", 10, 10);
	try
	{
		Bureaucrat	Mike("Mike", 150);
		std::cout << Mike << std::endl;
		Mike.signForm(contract);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat	Bob("Bob", 150);
		std::cout << Bob << std::endl;
		Bob.signForm(contract);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
