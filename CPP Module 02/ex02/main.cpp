/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:34:39 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/09 14:04:59 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp" 
#include <iostream>

using std::cout;
using std::endl;
using std::string;

#include <iostream>
#include "Fixed.hpp"

int main() {
	

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
    // Fixed a(2.5f);
    // Fixed b(3.2f);
    // Fixed c(2.5f);

    // std::cout << "a : " << a << std::endl;
    // std::cout << "b : " << b << std::endl;
    // std::cout << "c : " << c << std::endl;
	// cout << endl;
    // std::cout << "a > b : " << (a > b) << std::endl;
    // std::cout << "a < b : " << (a < b) << std::endl;
    // std::cout << "a >= c : " << (a >= c) << std::endl;
    // std::cout << "b <= c : " << (b <= c) << std::endl;
    // std::cout << "a == c : " << (a == c) << std::endl;
    // std::cout << "a != b : " << (a != b) << std::endl;
	// cout << endl;
    // std::cout << "a + b : " << (a + b) << std::endl;
    // std::cout << "b - a : " << (b - a) << std::endl;
    // std::cout << "a * b : " << (a * b) << std::endl;
    // std::cout << "b / a : " << (b / a) << std::endl;
	// cout << endl;
	// cout << endl;
    // std::cout << "a : " << a << std::endl;
    // std::cout << "a++ : " << (a++) << std::endl;
    // std::cout << "a after post-increment : " << a << std::endl;
	// cout << endl;
	// std::cout << "b : " << b << std::endl;
    // std::cout << "++b : " << (++b) << std::endl;
    // std::cout << "b after pre-increment : " << b << std::endl;
	// cout << endl;
    // std::cout << "c : " << c << std::endl;
    // std::cout << "c-- : " << (c--) << std::endl;
    // std::cout << "c after post-decrement : " << c << std::endl;
	// cout << endl;
	// std::cout << "a : " << a << std::endl;
    // std::cout << "--a : " << (--a) << std::endl;
    // std::cout << "a after pre-decrement : " << a << std::endl;
	// cout << endl;
    // std::cout << "min(a, b) : " << Fixed::min(a, b) << std::endl;
    // std::cout << "max(a, b) : " << Fixed::max(a, b) << std::endl;
    // std::cout << "min(a, c) : " << Fixed::min(a, c) << std::endl;
    // std::cout << "max(a, c) : " << Fixed::max(a, c) << std::endl;

    return 0;
}