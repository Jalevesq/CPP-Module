/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 08:20:21 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/14 12:23:11 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Character.hpp"
#include "./include/ICharacter.hpp"
#include "./include/AMateria.hpp"
#include "./include/Ice.hpp"
#include "./include/Cure.hpp"

using std::string;
using std::ostream;
using std::cout;
using std::endl;

int main(void)
{
	//Test 1
	// Character Johnny("Johnny");
	// Character Bobby("Bobby");
	
	// Ice *ice1 = new Ice;
	// Cure *cure1 = new Cure;
	// Johnny.equip(ice1);
	// Johnny.equip(ice1);
	// Johnny.equip(cure1);
	// Johnny.equip(ice1);
	// Johnny.equip(cure1);
	// Johnny.unequip(3);
	// Johnny.equip(cure1);
	// Johnny.equip(cure1);
	
	// Johnny.use(1, Bobby);
	// Johnny.use(3, Bobby);
	// Johnny.equip(ice1);
	// Johnny.equip(cure1);
	// delete ice1;
	// delete cure1;
	
	// Test 2
	// Ice ice1;
	// cout << ice1.getType() << endl;

	// Ice *ice2;
	// ice2 = ice1.clone();
	// cout << ice2->getType() << endl;
	// delete ice2;
	// cout << endl;
	
	// Cure *cure1 = new Cure;
	// Cure cure2(*cure1);
	// cout << cure1->getType() << endl;
	// cout << cure2.getType() << endl;
	// delete cure1;
	// cout << endl;
	

	// Test 3
	// Character Roger("Roger");
	// Ice *ice1 = new Ice;
	
	// Roger.equip(ice1);
	// Roger.equip(ice1);
	// Roger.equip(ice1);
	// Roger.equip(ice1);
	// Roger.equip(ice1);
	// Character rogerCopy(Roger);
	// cout << "Copy: ";
	// rogerCopy.equip(ice1);
	// cout << "Copy: ";
	// rogerCopy.unequip(1);
	

	// Roger.equip(ice1);
	// cout << "Copy: ";
	// rogerCopy.equip(ice1);
	// delete ice1;

	// Test 4
	// Character Johnny("Johnny");
	// AMateria *test = new Cure;
	// cout << test->getType() << endl;
	// Johnny.equip(test);
	// delete test;

	// Subject test
	ICharacter *me = new Character("me");
	ICharacter *Bob = new Character("Bob");
	AMateria *tmp;
	tmp = new Ice;
	me->equip(tmp);
	tmp = new Cure;
	me->equip(tmp);

	me->use(0, *Bob);
	me->use(1, *Bob);

	delete Bob;
	delete me;
	return (0);
}