/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:08:22 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/12 10:39:48 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(const Dog &copy) {
    cout << "[Copy Constructor of dog Called]" << endl;
    *this = copy;
}

Dog::Dog() {
    cout << "[Default Construtor of Dog Called]" << endl;
    this->_type = "Dog";
}

Dog::~Dog() {
    cout << "[Destructor of Dog Called]" << endl;
}

void Dog::makeSound(void) const {
    cout << "Woof!" << endl;
}

Dog& Dog::operator=(const Dog &copy) {
	if (this != &copy)
        this->_type = copy.getType();
	return (*this);
}