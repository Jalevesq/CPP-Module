/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:41:43 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/13 14:11:05 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

int main(void)
{
    PhoneBook oldPhoneBook;
    std::string input;
    
    std::cout << "Bienvenue sur Old PhoneBook !" << std::endl;
    while (1)
    {
        std::cout << "Vous avez 3 choix de commande. EXIT, SEARCH ou ADD. Vous pouvez ajouter un maximum de 8 personnes." << std::endl;
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