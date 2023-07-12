/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:23:17 by jalevesq          #+#    #+#             */
/*   Updated: 2023/07/12 12:53:46 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main(void)
{
	// // ----- SUBJECT TEST ----- //

	Span newSpan = Span(5);
	newSpan.addNumber(6);
	newSpan.addNumber(3);
	newSpan.addNumber(17);
	newSpan.addNumber(9);
	newSpan.addNumber(11);

    cout << endl;
    newSpan.printList();
    cout << endl;

	// // ----- TEST 1 ----- //
	
    // Span newSpan(5);

    // newSpan.addNumber(2147483647);
    // newSpan.addNumber(3);
    // newSpan.addNumber(-2147483647);
    // newSpan.addNumber(-2147483647);
    // newSpan.addNumber(-2147483648);
	// // // Va throw une exception si n'est plus commenté car 6 > 5
	// // newSpan.addNumber(10);
    // cout << endl;
    // newSpan.printList();
    // cout << endl;

	// // ----- TEST 2 ----- //

	// Span newSpan(20);

	// for (int i = 0; i < 15; i++)
	// 	newSpan.addNumber(i);
    // cout << endl;
    // newSpan.printList();
    // cout << endl;
	
	// // ----- TEST 3 ----- //
	
	// Span newSpan(20);

	// for (int i = 0; i < 21; i++)
	// 	newSpan.addNumber(i);
	// // Will throw exception here bc 21 > 20.
    // cout << endl;
    // newSpan.printList();
    // cout << endl;

	// // ----- TEST 4 ----- //

	// Span newSpan(20);
	// std::vector<int> rangeNumber;
	// for (int i = 0; i < 20; i++)
	// 	rangeNumber.push_back(i + 2);
	
	// newSpan.addRange(rangeNumber.begin(), rangeNumber.end());
	
    // cout << endl;
    // newSpan.printList();
    // cout << endl;
	
	// // ----- TEST 5 ----- //
	// // Ils vont tous lancer des exceptions car il n'y a pas au moins 2 nombres.
	// Span newSpan(5);
	// newSpan.longestSpan();
	// newSpan.shortestSpan();
	
	// newSpan.addNumber(23);
	
	// newSpan.longestSpan();
	// newSpan.shortestSpan();
	
	
    unsigned int longest_span = newSpan.longestSpan();
    unsigned int shortest_span = newSpan.shortestSpan();
    cout << "Shortest Span: " << shortest_span << endl;
    cout << "Longest Span: " << longest_span << endl;

}