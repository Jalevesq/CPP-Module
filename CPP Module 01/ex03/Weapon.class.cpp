/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:43:52 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/14 18:18:33 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon()
{
    // std::cout << "Default Constructor for Weapon called" << std::endl;
    this->_type = "fist";
}

Weapon::Weapon(std::string weapon)
{
    // std::cout << "Parameterized Constructor for Weapon called" << std::endl;
    this->_type = weapon;
}

Weapon::~Weapon()
{
    // std::cout << "Destructor for Weapon called" << std::endl;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}

const std::string& Weapon::getType(void)
{
    return this->_type;
}