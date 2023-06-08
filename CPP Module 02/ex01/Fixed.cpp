/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:58:09 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/08 17:32:09 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

using std::cout;
using std::endl;
using std::string;

////////////////////////////////////////////
/*    DEFAULT CONSTRUCTOR & DESTRUCTOR    */
////////////////////////////////////////////

Fixed::Fixed() {
    cout << "Default constructor called" << endl;
    _rawBits = 0;
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

////////////////////////////////////////////
/*          PARAMETRIC CONSTRUCTOR        */
////////////////////////////////////////////

Fixed::Fixed(const int intConstructor) {
    cout << "Int constructor called" << endl;
    this->_rawBits = intConstructor << this->_binary;
}

Fixed::Fixed(const float floatConstructor) {
    cout << "Float constructor called" << endl;
    this->_rawBits = roundf(floatConstructor * (1 << this->_binary));

}

Fixed::Fixed(const Fixed& other) {
    cout << "Copy constructor called" << endl;
    *this = other;
}

////////////////////////////////////////////
/*            OPERATOR OVERLOAD           */
////////////////////////////////////////////

Fixed& Fixed::operator=(const Fixed& other) {
    cout << "Copy assignment operator called" << endl;
	_rawBits = other.getRawBits();
    return *this;
}

////////////////////////////////////////////
/*            CLASS FUNCTION              */
////////////////////////////////////////////

int	Fixed::toInt(void) const {
	return (_rawBits >> this->_binary);
}

float Fixed::toFloat(void) const {
	return ((float)this->_rawBits / (1 << this->_binary));
}

////////////////////////////////////////////
/*            SETTER & GETTER             */
////////////////////////////////////////////

const int& Fixed::getRawBits( void ) const {
    // cout << "getRawBits member function called" << endl;
    return (this->_rawBits);
}

void    Fixed::setRawBits(const int raw) {
    this->_rawBits = raw;
}

