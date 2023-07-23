/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:30:22 by jalevesq          #+#    #+#             */
/*   Updated: 2023/07/23 12:16:53 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <sstream>
# include "RPN.hpp"

using std::string;
using std::cout;
using std::endl;
using std::cerr;

int main(int ac, char **av) {
	string av1;
    if (ac != 2) {
        cout << "Not good amount of argument." << endl;
        return (1);
    }
	av1 = av[1];
	if (av1.empty()) {
		cout << "Error: argument is empty." << endl;
		return (1);
	}
    RPN calculatorRPN(av[1]);
    calculatorRPN.calculate();
}