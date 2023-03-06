/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:41:43 by jalevesq          #+#    #+#             */
/*   Updated: 2023/03/06 11:38:23 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

int main(void)
{
    Phonebook oldPhoneBook;
    std::string input;
    
    std::cout << "Welcome on Old PhoneBook !\nYou have 3 choice of command. EXIT, SEARCH or ADD. You can add a maximum of 8 person." << std::endl;
    while (std::getline(std::cin, input))
    {
        if (input == "EXIT")
            return (0);
        else if (input == "ADD")
            oldPhoneBook.addContact();
        else if (input == "SEARCH")
        {
            do {
                std::cout << "Enter the index of the contact (Between 1 and 8) :" << std::endl;
                getchar(std::cin, input);
            } while (isdigit);
            oldPhoneBook.search(std::stoi(input));
        }
        else
            std::cout << "Wrong input." << std::endl;
    }
}