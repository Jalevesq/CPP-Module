/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:26:39 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/10 19:27:19 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap johnny("Johnny");
	ClapTrap bobby("Bobby");

	cout << endl;
	johnny.setAttackDamage(1);
	bobby.attack(johnny.getName());
	johnny.takeDamage(bobby.getAttackDamage());
	johnny.beRepaired(1);
	while (bobby.getHitPoint() != 0)
	{
		cout << endl;
		johnny.attack(bobby.getName());
		bobby.takeDamage(johnny.getAttackDamage());
	}
	bobby.beRepaired(5);
	cout << endl;
}