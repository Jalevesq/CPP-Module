/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:42:42 by jalevesq          #+#    #+#             */
/*   Updated: 2023/07/18 13:46:11 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

int main(int ac, char **av) {
    // Parse the input before creating class and putting it inside.
	if (ac < 2)
	{
		std::cerr << "Error: no argument" << std::endl;
		return (1);
	}
	PmergeMe algorithm(av);
	algorithm.sort();
}