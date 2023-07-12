/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:26:21 by jalevesq          #+#    #+#             */
/*   Updated: 2023/07/12 14:00:24 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> abc;
	for (int i = 0; i < 30; i += 3)
		abc.push_back(i);
	cout << easyfind(abc, 27) << endl;
	// // Will throw an error because 28 is not in vector.
	// cout << easyfind(abc, 28) << endl;

	
	// // Will throw an error because vector is not an int.
	// std::vector<double> def;
	// def.push_back(234234.234);
	// def.push_back(3432.34);
	// def.push_back(23.23);
	// cout << easyfind(def, 3) << endl;
}