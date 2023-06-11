/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:26:39 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/11 10:35:19 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	// TEST 1
	FragTrap Johnny("Johnny");
	FragTrap Bob("Bob"); 
	Bob.highFivesGuys();
	while (Bob.getEnergyPoint() > 0)
		Bob.highFivesGuys();
	cout << endl;
	Bob.attack(Johnny.getName());
	Bob.highFivesGuys();
	cout << endl;
	while (Bob.getHitPoint() > 0)
	{
		Johnny.attack(Bob.getName());
		Bob.takeDamage(Johnny.getAttackDamage());
		cout << endl;
	}
	Bob.attack(Johnny.getName());
	Bob.highFivesGuys();
	cout << endl;

	// TEST 2
	// ClapTrap Bobby("Bobby");
	// FragTrap Roger("Roger");

	// Roger.highFivesGuys();
	// Roger.attack(Bobby.getName());
	// Bobby.takeDamage(Roger.getAttackDamage());
	// Roger.attack(Bobby.getName());
	// Bobby.takeDamage(Roger.getAttackDamage());

	
}