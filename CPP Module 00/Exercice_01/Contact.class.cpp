/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:36:16 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/11 18:10:05 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"


// Constructeur & Destructeur par default
Contact::Contact () {
    std::cout << "Constructeur d'une classe Contact: " << std::endl;
}

Contact::~Contact () {
    std::cout << "Destructor Called" << std::endl;
}

// Setter
void    Contact::setName(std::string name) {
    this->_name = name;
}
void    Contact::setLastName(std::string lastName) {
    this->_lastName = lastName;
}
void    Contact::setNickname(std::string nickname) {
    this->_nickname = nickname;
}
void    Contact::setPhoneNumber(std::string phoneNumber) {
    this->_phoneNumber = phoneNumber;
}
void    Contact::setSecret(std::string secret) {
    this->_secret = secret;
}

// Getter
std::string Contact::getName(void) {
    return(this->_name);
}
std::string Contact::getLastName(void) {
    return(this->_lastName);
}
std::string Contact::getNickname(void) {
    return(this->_nickname);
}
std::string Contact::getPhoneNumber(void) {
    return(this->_phoneNumber);
}
std::string Contact::getSecret(void) {
    return(this->_secret);
}