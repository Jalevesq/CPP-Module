/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:23:07 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 11:34:33 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// ZOMBIE CLASS FUNCTION
Zombie::Zombie() {
    _name = "Zombie";
    cout << "Zombie default constructor called" << endl;
}

Zombie::Zombie(string name) {
    _name = name;
    cout << "Zombie constructor for " << _name << " called" << endl;
}

Zombie::~Zombie () {
    cout << "Destructor for " << _name << " Called" << endl;
}

void    Zombie::announce(void) {
    cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}
