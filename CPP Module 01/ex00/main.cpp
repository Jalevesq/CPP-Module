/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:21:57 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/11 19:38:36 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

// Manque fonction randomchump. Pas certain de comprendre?
int main(void)
{
    Zombie zombie;
    Zombie Bob("Bob");
    Zombie* newZombie = new Zombie("Ethan");

    newZombie->announce();
    zombie.announce();
    Bob.announce();
    delete (newZombie);
    return (0);
}