/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:45:40 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 13:24:07 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
    // std::cout << "Parametized constructor for HumanB Called" << std::endl;
    this->_name = name;
}

HumanB::~HumanB()
{
    // std::cout << "Destructor for HumanB Called" << std::endl;

}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
}