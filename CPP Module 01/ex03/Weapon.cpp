/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:43:52 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/12 22:41:18 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Default Constructor for Weapon called" << std::endl;
    _type = "fist";
}

Weapon::Weapon(std::string weapon)
{
    std::cout << "Parameterized Constructor for Weapon called" << std::endl;
    _type = weapon;
}

Weapon::~Weapon()
{
    std::cout << "Destructor for Weapon called" << std::endl;
}

void    Weapon::setType(std::string type)
{
    _type = type;
}

const std::string& Weapon::getType(void)
{
    const std::string& refType = _type;
    return (refType);
}