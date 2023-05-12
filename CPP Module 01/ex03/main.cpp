/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:43:25 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/12 18:42:21 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    // Difference entre ces 2 facons ?
    // Weapon club("crude spiked club");
    Weapon club = Weapon("crude spiked club");

    HumanA Bob("Bob", club);
    Bob.attack();
    // not working bc did not chance the weapon of HumanA
    club.setType("some other type of club");
    Bob.attack();
}