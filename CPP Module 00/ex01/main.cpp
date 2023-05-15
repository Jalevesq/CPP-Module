/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:41:43 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/15 12:33:45 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

int main(void)
{
    PhoneBook oldPhoneBook;
    std::string input;
    
    std::cout << "Welcome on Old PhoneBook !" << std::endl;
    while (1)
    {
        std::cout << "Vous avez 3 choix de commande. EXIT, SEARCH ou ADD. Vous pouvez avoir un maximum de 8 contacts." << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
            return (1);
        if (input == "EXIT")
        {
            std::cout << "exit" << std::endl;
            return (0);
        }
        else if (input == "ADD")
            oldPhoneBook.addContact();
        else if (input == "SEARCH")
			oldPhoneBook.search();
        else
            std::cout << "Wrong input." << std::endl;
    }
}