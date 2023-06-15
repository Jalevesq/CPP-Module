/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:24:37 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/14 21:17:38 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/Exception.hpp"

int main(void) {
	// Test 1
	try {
		Bureaucrat def("Bobby", 0);
		Bureaucrat abc("Johnny", 156);
	} catch (GradeTooHighException& e) {
		cout << e.what() << endl;
	} catch (GradeTooLowException& e) {
		cout << e.what() << endl;
	}
	
	// Test 2
	// Bureaucrat abc("Johnny", 150);
	// try {
	// 	abc.decrementGrade();
	// 	cout << abc.getGrade() << endl;
	// } catch (GradeTooLowException& e) {
	// 	cout << e.what() << endl;
	// }

	// Test 3
	// Bureaucrat def("Bobby", 1);
	// try {
	// 	def.incrementGrade();
	// } catch (GradeTooHighException& e) {
	// 	cout << e.what() << endl;
	// }
	
	// Test 4
	// Bureaucrat def("Johnny", 151);
	// Bureaucrat abc("Licorne", 0);
	
	// Test 5
	// Bureaucrat test("Toto", 75);
	// cout << test << endl;
	// for (int i = 0; i < 5; i++)
	// 	test.incrementGrade();
	// cout << test << endl;
	// for (int i = 0; i < 10; i++)
	// 	test.decrementGrade();
	// cout << test << endl;
}