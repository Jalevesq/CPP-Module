/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:17:13 by jalevesq          #+#    #+#             */
/*   Updated: 2023/03/06 11:10:02 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

Phonebook::Phonebook(void) {
    std::cout << "Constructor called" << std::endl;
    _contactNumber = 0;
}

Phonebook::~Phonebook(void) {
    std::cout << "Destructor Called" << std::endl;
}

void    Phonebook::search(int index) {
    if (index < 1 && index > 8)
    {
        std::cout << "Bad Index." << std::endl;
        return;
    }
    index += 1;
    std::cout << "Name: " << _contacts[index].name << std::endl;
    std::cout << "Last name: " << _contacts[index].lastName << std::endl;
    std::cout << "Phone numnber: " << _contacts[index].phoneNumber << std::endl;
    std::cout << "Nickname: " << _contacts[index].nickname << std::endl;
    std::cout << "Darkest secret" << _contacts[index].secret << std::endl;
}

void    Phonebook::addContact(void) {
    
    // First name
    do {
        std::cout << "Enter the first name of the contact. The field cannot be empty." << std::endl;
        getline(std::cin, _contacts[_contactNumber % 8].name);
    } while (_contacts[_contactNumber % 8].name.empty());

    // Last name
    do {
        std::cout << "Enter the last name of the contact. The field cannot be empty." << std::endl;
        getline(std::cin, _contacts[_contactNumber % 8].lastName);
    } while (_contacts[_contactNumber % 8].lastName.empty());
    
    // Nickname
    do {
        std::cout << "Enter the phone number of the contact. The field cannot be empty." << std::endl;
        getline(std::cin, _contacts[_contactNumber % 8].phoneNumber);
    } while (_contacts[_contactNumber % 8].phoneNumber.empty());
    
    // Phone Number
    do {
        std::cout << "Enter the nickname of the contact. The field cannot be empty." << std::endl;
        getline(std::cin, _contacts[_contactNumber % 8].nickname);
    } while (_contacts[_contactNumber % 8].nickname.empty());
    
    // Secret
    do {
        std::cout << "Enter the darkest secret of the contact. The field cannot be empty." << std::endl;
        getline(std::cin, _contacts[_contactNumber % 8].secret);
    } while (_contacts[_contactNumber % 8].secret.empty());
    
    std::cout << "Contact enregistré !\nVous êtes de retour au menu principal." << std::endl;
    _contactNumber++;
    return ;
}