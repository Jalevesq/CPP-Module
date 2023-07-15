/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:56:50 by jalevesq          #+#    #+#             */
/*   Updated: 2023/07/15 13:42:03 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

# include <fstream>
# include <iostream>
# include <string>
# include <map>

// The name the input file MUST have.
#define INPUT_FILENAME "input.txt"

using std::string;
using std::cout;
using std::endl;
using std::cerr;


bool does_input_exist(char *input) {
	string sInput(input);

	if (sInput == INPUT_FILENAME) {
		std::ifstream file(sInput);
		if (!file.good()) {
			cerr << "Can't open input (" << INPUT_FILENAME << ") database." << endl;
			return (false);	
		}
		file.close();
		return (true);
	} else {
		cerr << "Input filename is not " << INPUT_FILENAME << "."<< endl;
		return (false);
	}
}

int main(int ac, char **av) {
	if (ac != 2) {
		cerr << "Not good amount of argument: ./btc input.txt" << endl;
		return (1);
	}
	if (!does_input_exist(av[1]))
		return (1); 
	try {
		BitcoinExchange convert;
		convert.convertWithInput(av[1]);
	} catch (std::exception &e) {
		cout << "Error: " << e.what() << endl;
		return (1);
	}
	return (0);
}