/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:41:43 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/08 16:06:10 by jalevesq         ###   ########.fr       */
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
			
        }
        else
            std::cout << "Wrong input." << std::endl;
    }
}