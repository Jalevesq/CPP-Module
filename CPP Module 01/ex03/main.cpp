/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:43:25 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 13:23:40 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("a crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
	{
		Weapon club = Weapon();
        HumanA bob("Bobby", club);
        bob.attack();
        club.setType("a shovel");
        bob.attack();
	}
    {
        Weapon club = Weapon("a crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}