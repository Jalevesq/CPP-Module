/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:24:37 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/15 11:32:24 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Bureaucrat.hpp"
#include "./include/Form.hpp"

using std::string;
using std::cout;
using std::endl;

int main(void) {
	Bureaucrat Bobby("Bobby", 2);
	Bureaucrat Johnny("Johnny", 4);
	Form form2("form2", 3, 1);

	cout << endl;
	Johnny.signForm(form2);
	cout << endl;
	cout << form2.getIsSigned() << endl;
	Bobby.signForm(form2);
	cout << form2.getIsSigned() << endl;
}