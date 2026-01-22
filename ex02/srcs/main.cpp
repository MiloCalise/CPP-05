/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:51:52 by miltavar          #+#    #+#             */
/*   Updated: 2026/01/22 15:25:13 by miltavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "===== CREATION DES BUREAUCRATS =====" << std::endl;
    Bureaucrat boss("Boss", 1);
    Bureaucrat mid("Mid", 50);
    Bureaucrat low("Low", 150);

    std::cout << boss << std::endl;
    std::cout << mid << std::endl;
    std::cout << low << std::endl;

    std::cout << "\n===== CREATION DES FORMS =====" << std::endl;

    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robo("Bender");
    PresidentialPardonForm pardon("Arthur Dent");

    std::cout << "\n===== TEST SIGNATURE =====" << std::endl;

    low.signForm(shrub);
    mid.signForm(shrub);

    mid.signForm(robo);
    boss.signForm(robo);

    mid.signForm(pardon);
    boss.signForm(pardon);

    std::cout << "\n===== TEST EXECUTION =====" << std::endl;

    low.executeForm(shrub);
    mid.executeForm(shrub);

    mid.executeForm(robo);
    boss.executeForm(robo);

    mid.executeForm(pardon);
    boss.executeForm(pardon);

    std::cout << "\n===== TEST EXECUTION SANS SIGNATURE =====" << std::endl;

    ShrubberyCreationForm unsignedForm("garden");
    boss.executeForm(unsignedForm);

    std::cout << "\n===== FIN DES TESTS =====" << std::endl;
    return 0;
}
