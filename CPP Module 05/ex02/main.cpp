/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:24:37 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/17 15:52:35 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/AForm.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include "./include/RobotomyRequestForm.hpp"
// #include "./include/PresidentialPardonForm.hpp"

using std::string;
using std::cout;
using std::endl;

int main(void) {
	// ShrubberyCreationForm tree("Tree Form");
	// RobotomyRequestForm robot("Robot Form");
	RobotomyRequestForm robot("Robotomy Form", "bob");
	Bureaucrat Johnny("Johnny", 45);
	Johnny.signForm(robot);
	Johnny.executeForm(robot);
	// cout << president << endl;
	// Johnny.signForm(FormCreation);
}