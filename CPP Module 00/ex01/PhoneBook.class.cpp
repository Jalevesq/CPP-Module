/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:17:13 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/13 09:08:04 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
    std::cout << "Constructor Phonebook called" << std::endl;
    _contactNumber = 0;
}

PhoneBook::~PhoneBook(void) {
    std::cout << "Destructor Phonebook Called" << std::endl;
}

void    PhoneBook::search(void) {

    std::string input;
    int number;
    std::cout << "Input an Index between 1 and 8" << std::endl;
    do {
        getline(std::cin, input);
         try {
            // can't use stoi. is in c++11 not 98
            number = std::stoi(input);
            if (number < 1 || number > 8)
                std::cout << "Invalid Index. Please enter an index between 1 and 8." << std::endl;
        }
        catch (const std::exception& e) {
            std::cout << "Invalid input. Please enter an integer." << std::endl;
        }
        } while (number < 1 || number > 8);
    number -= 1;
    std::cout << "Name: " << _contacts[number].getName() << std::endl;
    std::cout << "Last name: " << _contacts[number].getLastName() << std::endl;
    std::cout << "Nickname: " << _contacts[number].getNickname() << std::endl;
    std::cout << "Phone numnber: " << _contacts[number].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << _contacts[number].getSecret() << std::endl;
}

void    PhoneBook::addContact(void) {
    
    std::string info;
    
    if (_contactNumber > 7)
        _contactNumber = 0;
    // First name
    do {
        std::cout << "Enter the first name of the contact. This field cannot be empty." << std::endl;
        getline(std::cin, info);
    } while (info.empty());
    _contacts[_contactNumber].setName(info);
    info = "";

    // Last name
    do {
        std::cout << "Enter the last name of the contact. This field cannot be empty." << std::endl;
        getline(std::cin, info);
    } while (info.empty());
    _contacts[_contactNumber].setLastName(info);
    info = "";

    // Nickname
    do {
        std::cout << "Enter the nickname of the contact. This field cannot be empty." << std::endl;
        getline(std::cin, info);
    } while (info.empty());
    _contacts[_contactNumber].setNickname(info);
    info = "";
    
    // Phone Number
    do {
        std::cout << "Enter the Phone Number of the contact. This field cannot be empty." << std::endl;
        getline(std::cin, info);
    } while (info.empty());
    _contacts[_contactNumber].setPhoneNumber(info);
    info = "";
    
    // Secret
    do {
        std::cout << "Enter the darkest secret of the contact. This field cannot be empty." << std::endl;
        getline(std::cin, info);
    } while (info.empty());
    _contacts[_contactNumber].setSecret(info);
    info = "";
    
    std::cout << "Contact enregistré !\nVous êtes de retour au menu principal." << std::endl;
    _contactNumber++;
    return ;
}