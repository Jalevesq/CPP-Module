/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:24:37 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/17 12:39:45 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/AForm.hpp"
#include "./include/ShrubberyCreationForm.hpp"
// #include "./include/RobotomyRequestForm.hpp"
// #include "./include/PresidentialPardonForm.hpp"

using std::string;
using std::cout;
using std::endl;

int main(void) {
	// ShrubberyCreationForm tree("Tree Form");
	// RobotomyRequestForm robot("Robot Form");
	ShrubberyCreationForm president("Tree Form", "Garden");
	Bureaucrat Johnny("Johnny", 124);
	Johnny.signForm(president);
	Johnny.executeForm(president);
	// cout << president << endl;
	// Johnny.signForm(FormCreation);
}