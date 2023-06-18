/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:24:37 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/17 21:14:59 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/AForm.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include "./include/RobotomyRequestForm.hpp"
#include "./include/PresidentialPardonForm.hpp"

using std::string;
using std::cout;
using std::endl;

int main(void) {

	Bureaucrat Johnny("Johnny", 1);
	Bureaucrat Toto("Toto", 150);
	Bureaucrat Tom("Tom", 75);

	PresidentialPardonForm president("Forgive Form", "Tommy");
	ShrubberyCreationForm tree("Tree Form", "Garden");
	RobotomyRequestForm robotomy("Robotomy Form", "Bob");

	cout << Johnny << endl;
	cout << Toto << endl;
	cout << Tom << endl;
	cout << endl;
	cout << president << endl;
	cout << tree << endl;
	cout << robotomy << endl;
	cout << endl;

	// Test 1 - Robotomy Form
	Toto.signForm(robotomy);
	Toto.executeForm(robotomy);
	Johnny.signForm(robotomy);
	Toto.executeForm(robotomy);
	Johnny.executeForm(robotomy);
	cout << endl;
	// Test 2 - President Form
	Toto.signForm(president);
	Toto.executeForm(president);
	Johnny.signForm(president);
	Toto.executeForm(president);
	Johnny.executeForm(president);
	Johnny.executeForm(president);
	cout << endl;
	// Test 3 - ShrubberyCreation Form
	Toto.signForm(tree);
	Toto.executeForm(tree);
	Tom.signForm(tree);
	Tom.signForm(tree);
	Toto.executeForm(tree);
	Tom.executeForm(tree);
	
}