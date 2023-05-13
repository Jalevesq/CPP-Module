/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:46:16 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/12 22:37:41 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
    std::cout << "Parameterized Constructor for HumanA called" << std::endl;
    _name = name;
    _weapon = weapon.getType();
}

HumanA::~HumanA()
{
    std::cout << "Destructor for HumanA Called" << std::endl;
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon << std::endl;
}