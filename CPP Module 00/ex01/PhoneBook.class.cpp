/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:17:13 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/13 12:00:34 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"

#define MAX_CONTACTS 8
#define WIDTH 11

PhoneBook::PhoneBook(void) {
    std::cout << "Constructor Phonebook called" << std::endl;
    _contactNumber = 0;
}

PhoneBook::~PhoneBook(void) {
    std::cout << "Destructor Phonebook Called" << std::endl;
}

void    PhoneBook::search(void) {

    std::string input;
    std::cout << std::right;
    std::cout << std::setw(WIDTH) << "index" << " | "
              << std::setw(WIDTH) << "Prénom" << " | "
              << std::setw(WIDTH) << "Nom" << " | "
              << std::setw(WIDTH) << "Nickname" << std::endl;

    for (int i = 0; i < MAX_CONTACTS; i++) {
        std::string firstName = _contacts[i].getName().substr(0, WIDTH - 1);
        if (_contacts[i].getName().length() >= WIDTH)
            firstName[WIDTH - 2] = '.';

        std::string lastName = _contacts[i].getLastName().substr(0, WIDTH - 1);
        if (_contacts[i].getLastName().length() >= WIDTH)
            lastName[WIDTH - 2] = '.';

        std::string nickname =_contacts[i].getNickname().substr(0, WIDTH - 1);
        if (_contacts[i].getNickname().length() >= WIDTH)
            nickname[WIDTH - 2] = '.';


        std::cout << std::setw(WIDTH) << i + 1 << " | "
                  << std::setw(WIDTH) << firstName << " | "
                  << std::setw(WIDTH) << lastName << " | "
                  << std::setw(WIDTH) << nickname << std::endl;
    }
}
void    PhoneBook::addContact(void) {
    
    std::string info;
    
    _contactNumber %= 8;
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