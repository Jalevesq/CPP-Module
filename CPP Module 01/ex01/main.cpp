/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:52:45 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 12:31:02 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main(void)
{
    int n = 5;
    string name = "Bobby";

    // Je vais creer N zombie avec le nom NAME.
    Zombie *zombie = zombieHorde(n, name);

    // Chaque Zombie va "s'annoncer" avec son "name"
    for (int i = 0; i < n; i++)
	{
		cout << i << " ";
        zombie[i].announce();
	}

    // Je delete tout les Zombies car cree avec New.
    delete[] zombie;
    return (0);
}