/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:18:18 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/13 16:16:32 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Aanimal.hpp"

////////////////////////////////////////
/*       CONSTRUCTOR & DESTRUCTOR     */
////////////////////////////////////////

Aanimal::Aanimal(const Aanimal &copy) {
    cout << "[Copy Constructor of animal Called]" << endl;
    *this = copy;
}
Aanimal::Aanimal() {
    cout << "[Default Constructor of animal Called]" << endl;
    this->_type = "<No Type>";
}

Aanimal::~Aanimal() {
    cout << "[Destructor of animal Called]" << endl;

}

////////////////////////////////////////
/*          OPERATOR OVERLOAD         */
////////////////////////////////////////

Aanimal& Aanimal::operator=(const Aanimal &copy) {
	if (this != &copy)
        this->_type = copy.getType();
	return (*this);
}

////////////////////////////////////////
/*               GETTER               */
////////////////////////////////////////

const string& Aanimal::getType() const {
    return(this->_type);
}

////////////////////////////////////////
/*               SETTER               */
////////////////////////////////////////

void Aanimal::setType(const string newType) {
    this->_type = newType;
}

// void Aanimal::makeSound(void) const {
//     cout << "<Animal Sound>" << endl;
// }