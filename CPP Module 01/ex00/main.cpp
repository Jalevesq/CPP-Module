/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:21:57 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/11 19:50:45 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

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

// Manque fonction randomchump. Pas certain de comprendre?
int main(void)
{
    Zombie *Bob = newZombie("Bob");
    Bob->announce();
    randomChump("Roger");
    delete(Bob);
    return (0);
}