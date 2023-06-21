/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:02:14 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/21 16:53:37 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::string;
using std::cerr;
using std::cout;
using std::endl;


// Doit check que le av fait parti d'un des types suivants: float, double, int, char
int main(int ac, char **av)
{
	(void)av;
	if (ac != 2)
	{
		cerr << "Error" << endl << "Not good amount of argument. Exemple > ./ex00 a - ./ex00 2 - ./ex00 2.0f" << endl;
		return (1);
	}
	switch (getType(av[1]))
	{
		
	}
	// cout << "int: " << dynamic_cast<int>(av[1]) << endl;
}
