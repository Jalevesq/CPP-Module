/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:36:16 by jalevesq          #+#    #+#             */
/*   Updated: 2023/03/06 10:55:38 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact () {
    // std::cout << "Constructeur d'une classe Contact: " << std::endl;
    name = "";
    lastName = "";
    phoneNumber = "";
    nickname = "";
    phoneNumber = "";
}

Contact::~Contact () {
    std::cout << "Destructor Called" << std::endl;
}