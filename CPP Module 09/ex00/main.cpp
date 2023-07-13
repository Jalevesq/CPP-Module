/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:56:50 by jalevesq          #+#    #+#             */
/*   Updated: 2023/07/13 15:20:54 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::cerr;


bool does_db_exist(char *input) {
	string sInput(input);
	std::ifstream file("data.csv");

	if (!file.good()) {
		cerr << "Database does not exist (data.csv) !" << endl;
		return (false);	
	}
	file.close();

}

int main(int ac, char **av) {
	if (ac != 2) {
		cerr << "Not good amount of argument: ./btc input.txt" << endl;
		return (1);
	}
	if (!does_db_exist(av[1]))
		return (1);

	// if (sInput == "input.txt") {
	// 	std::ifstream file(sInput);
	// 	if (!file.good()) {
	// 		cerr << "Database does not exist (data.csv) !" << endl;
	// 		return (false);	
	// 	}
	// 	file.close();
	// 	return (true);
	// } else {
	// 	cerr << "Input filename is not \'input.txt\'."<< endl;
	// 	return (false);
	// }
	
}