/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:24:37 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/18 10:36:36 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/AForm.hpp"
#include "./include/ShrubberyCreationForm.hpp"
#include "./include/RobotomyRequestForm.hpp"
#include "./include/PresidentialPardonForm.hpp"
#include "./include/Intern.hpp"

using std::string;
using std::cout;
using std::endl;

int main(void) {
	Intern adult;
	AForm* abc;
	
	Bureaucrat Johnny("Johnny", 1);
	
	cout << endl;
	abc = adult.makeForm("robotomy request", "George");
	cout << abc << endl;
	Johnny.signForm(*abc);
	Johnny.executeForm(*abc);
	
	cout << endl;
	
	delete abc;
	abc = adult.makeForm("presidential pardon", "Bobby");
	cout << abc << endl;
	Johnny.signForm(*abc);
	Johnny.executeForm(*abc);
	
	cout << endl;
	
	delete abc;
	abc = adult.makeForm("shrubbery creation", "Garden");
	cout << abc << endl;
	Johnny.signForm(*abc);
	Johnny.executeForm(*abc);
	delete abc;

	adult.makeForm("test form", "Bob");
	
}