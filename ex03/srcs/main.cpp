/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:51:52 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/22 17:02:24 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

int	main(void)
{
	Intern intern;
    AForm* f;

    f = intern.makeForm("RobotomyRequestForm", "Bender");
    delete f;

    f = intern.makeForm("ShrubberyCreationForm", "Garden");
    delete f;

    try
    {
        f = intern.makeForm("unknown form", "test");
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
