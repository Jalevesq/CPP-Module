/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:53:40 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/11 20:06:56 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// ZOMBIE CLASS FUNCTION
Zombie::Zombie() {
    _name = "Zombie";
    std::cout << "Zombie default constructor called" << std::endl;
}

Zombie::Zombie(std::string name) {
    _name = name;
    std::cout << "Zombie constructor for " << _name << " called" << std::endl;
}

Zombie::~Zombie () {
    std::cout << "Destructor for " << _name << " Called" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name) {
    _name = name;
}