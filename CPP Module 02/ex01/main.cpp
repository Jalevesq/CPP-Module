/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 09:46:15 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/08 17:30:10 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main( void )
{
	cout << "A" << endl;
	Fixed a;
	cout << "B WITH 10" << endl;
	Fixed const b( 10 );
	cout << "C WITH 42.42f" << endl;
	Fixed const c( 42.42f );
	cout << "D WITH B" << endl;
	Fixed const d( b );

	cout << "A WITH (1234.4321f)" << endl;
	a = Fixed( 1234.4321f );
	// std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}