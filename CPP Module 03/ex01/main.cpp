/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:26:39 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/11 10:13:26 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	// TEST 1
	ScavTrap Johnny("Johnny");
	ScavTrap Bob("Bob"); 
	Bob.guardGate();
	while (Bob.getEnergyPoint() > 0)
		Bob.guardGate();
	cout << endl;
	Bob.attack(Johnny.getName());
	Bob.guardGate();
	cout << endl;
	while (Bob.getHitPoint() > 0)
	{
		Johnny.attack(Bob.getName());
		Bob.takeDamage(Johnny.getAttackDamage());
		cout << endl;
	}
	Bob.attack(Johnny.getName());
	Bob.guardGate();
	cout << endl;

	// TEST 2
	// ClapTrap Bob("Bob");
	// ClapTrap Johnny("Johnny");

	// while (Bob.getEnergyPoint() > 0)
	// 	Bob.attack(Johnny.getName());
	// Bob.attack(Johnny.getName());
	// cout << endl;
	
	// Johnny.setAttackDamage(1);
	// while (Bob.getHitPoint() > 0)
	// {
	// 	Johnny.attack(Bob.getName());
	// 	Bob.takeDamage(Johnny.getAttackDamage());
	// 	cout << endl;
	// }

	// TEST 3
	// ClapTrap Bobby("Bobby");
	// ScavTrap Roger("Roger");

	// Roger.guardGate();
	// Roger.attack(Bobby.getName());
	// Bobby.takeDamage(Roger.getAttackDamage());
	// Roger.attack(Bobby.getName());
	// Bobby.takeDamage(Roger.getAttackDamage());

	
}