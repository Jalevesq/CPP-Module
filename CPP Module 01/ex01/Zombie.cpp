/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:53:40 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 12:31:33 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// ZOMBIE CLASS METHOD
Zombie::Zombie() {
    this->_name = "Zombie";
    cout << "Zombie default constructor called" << endl;
}

Zombie::Zombie(string name) {
    this->_name = name;
    cout << "Zombie constructor for " << _name << " called" << endl;
}

Zombie::~Zombie () {
    cout << "Destructor for " << _name << " Called" << endl;
}

void    Zombie::announce(void) {
    cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void    Zombie::setName(string name) {
    this->_name = name;
}