/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:18:18 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/12 12:29:43 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

////////////////////////////////////////
/*       CONSTRUCTOR & DESTRUCTOR     */
////////////////////////////////////////

Animal::Animal(const Animal &copy) {
    cout << "[Copy Constructor of animal Called]" << endl;
    *this = copy;
}
Animal::Animal() {
    cout << "[Default Constructor of animal Called]" << endl;
    this->_type = "<No Type>";
}

Animal::~Animal() {
    cout << "[Destructor of animal Called]" << endl;

}

////////////////////////////////////////
/*          OPERATOR OVERLOAD         */
////////////////////////////////////////

Animal& Animal::operator=(const Animal &copy) {
	if (this != &copy)
        this->_type = copy.getType();
	return (*this);
}

////////////////////////////////////////
/*               GETTER               */
////////////////////////////////////////

const string& Animal::getType() const {
    return(this->_type);
}

////////////////////////////////////////
/*               SETTER               */
////////////////////////////////////////

void Animal::setType(const string newType) {
    this->_type = newType;
}

void Animal::makeSound(void) const {
    cout << "<Animal Sound>" << endl;
}