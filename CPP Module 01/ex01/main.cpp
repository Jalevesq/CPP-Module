/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:52:45 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/11 20:11:26 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n = 5;
    std::string name = "Ethan";

    // Je vais creer N zombie avec le nom NAME.
    Zombie *zombie = zombieHorde(n, name);

    // Chaque Zombie va "s'annoncer" avec son prenom
    for (int i = 0; i < n; i++)
        zombie[i].announce();

    // Je delete tout les Zombies car cree avec New.
    delete[] zombie;
    return (0);
}