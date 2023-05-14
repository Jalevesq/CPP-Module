/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:23:07 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/11 19:54:37 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// MAIN FUNCTION

Zombie  *newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}

void randomChump( std::string name )
{
    Zombie zombie(name);
    zombie.announce();
}

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
