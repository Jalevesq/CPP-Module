/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:34:35 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/09 13:59:24 by jalevesq         ###   ########.fr       */
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
    // cout << "Default constructor called" << endl;
    this->_rawBits = 0;
}

Fixed::~Fixed()
{
    // cout << "Destructor called" << endl;
}

////////////////////////////////////////////
/*          PARAMETRIC CONSTRUCTOR        */
////////////////////////////////////////////

Fixed::Fixed(const int intConstructor) {
    // cout << "Int constructor called" << endl;
    this->_rawBits = intConstructor << this->_binary;
}

Fixed::Fixed(const float floatConstructor) {
    // cout << "Float constructor called" << endl;
    this->_rawBits = roundf(floatConstructor * (1 << this->_binary));

}

Fixed::Fixed(const Fixed& other) {
    // cout << "Copy constructor called" << endl;
    *this = other;
}

////////////////////////////////////////////
/*            OPERATOR OVERLOAD           */
////////////////////////////////////////////

Fixed& Fixed::operator=(const Fixed& other) {
    // cout << "Copy Assignment operator called" << endl;
	if (this != &other)
		this->_rawBits = other.getRawBits();
    return *this;
}

// +, -, /, * //

Fixed Fixed::operator+(const Fixed& other) {
	Fixed tmp(*this);
	tmp.setRawBits(this->_rawBits + other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator-(const Fixed& other) {
	Fixed tmp(*this);
	tmp.setRawBits(this->_rawBits - other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator*(const Fixed& other) {
	Fixed tmp(*this);
	tmp.setRawBits((this->_rawBits * other.getRawBits()) >> this->_binary);
	return (tmp);
}

Fixed Fixed::operator/(const Fixed& other) {
	Fixed tmp(*this);
	tmp.setRawBits((this->_rawBits << this->_binary) / other.getRawBits());
	return (tmp);
}

// ++, -- //

Fixed& Fixed::operator++(void) {
	this->_rawBits += 1;
	return (*this);
}

Fixed& Fixed::operator--(void) {
	this->_rawBits -= 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed old(*this);
	this->_rawBits += 1;
	return (old);
}


Fixed Fixed::operator--(int) {
	Fixed old(*this);
	this->_rawBits -= 1;
	return (old);
}

// min & max

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed&	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed&	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	return b;
}


// <, <=, >, >=, ==, != //

bool Fixed::operator!=(const Fixed& other) const {
	return (this->_rawBits != other.getRawBits()); 
}

bool Fixed::operator==(const Fixed& other) const {
	return (this->_rawBits == other.getRawBits()); 
}

bool Fixed::operator>(const Fixed& other) const {
	return (this->_rawBits > other.getRawBits()); 
}

bool Fixed::operator<(const Fixed& other) const {
	return (this->_rawBits < other.getRawBits()); 
}

bool Fixed::operator<=(const Fixed& other) const {
	return (this->_rawBits <= other.getRawBits()); 
}

bool Fixed::operator>=(const Fixed& other) const {
	return (this->_rawBits >= other.getRawBits()); 
}

// << //

std::ostream & operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return (os);
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
    return (this->_rawBits);
}

void    Fixed::setRawBits(const int raw) {
    this->_rawBits = raw;
}

