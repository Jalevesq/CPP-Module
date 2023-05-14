/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:46:16 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/14 18:17:58 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _weapon(weapon)
{
    // std::cout << "Parameterized Constructor for HumanA called" << std::endl;
    this->_name = name;
}

HumanA::~HumanA()
{
    // std::cout << "Destructor for HumanA Called" << std::endl;
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}