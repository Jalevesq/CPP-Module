/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 09:46:44 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/09 14:07:32 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

using std::cout;
using std::endl;
using std::string;

Fixed::Fixed() {
    cout << "Default constructor called" << endl;
    _number = 0;
}

Fixed::Fixed(int number) {
    cout << "Parametric constructor called" << endl;
    this->_number = number;
}

Fixed::Fixed(const Fixed& other) {
    cout << "Copy constructor called" << endl;
    this->_number = other.getRawBits();
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    cout << "Copy assignment operator called" << endl;
    if (this != &other) {
        _number = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits( void ) const {
    cout << "getRawBits member function called" << endl;
    return (this->_number);
}

void    Fixed::setRawBits(const int raw) {
    this->_number = raw;
}

