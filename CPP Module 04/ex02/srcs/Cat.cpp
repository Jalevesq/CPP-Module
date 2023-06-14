/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:27:03 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/13 15:39:52 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(const Cat &copy) {
    cout << "[Copy Constructor of Cat Called]" << endl;
    *this = copy;
}

Cat::Cat() {
    cout << "[Default Construtor of Cat Called]" << endl;
    this->_type = "Cat";
    _catBrain = new Brain;
}

Cat::~Cat() {
    cout << "[Destructor of Cat Called]" << endl;
    delete _catBrain;
}

void Cat::makeSound(void) const {
    cout << "Meow!" << endl;
}

Cat& Cat::operator=(const Cat &copy) {
	if (this != &copy)
    {
        this->_type = copy.getType();
        this->_catBrain = new Brain();
    }
	return (*this);
}