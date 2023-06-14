/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:18:19 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/14 14:36:11 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongAnimal.hpp"
#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongCat.hpp"

int main(void)
{
	// Subject Test
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	cout << endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	cout << meta->getType() << " " << endl;

	cout << endl;

	j->makeSound();
	i->makeSound(); //will output the cat sound!
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	// Test 1
	// const WrongAnimal* wrongAnimal = new WrongAnimal();
	// const WrongAnimal* wrongCat = new WrongCat();
	// const Animal* animal = new Animal();
	// const Animal* cat = new Cat();
	// const Animal* dog = new Dog();

	// cout << endl;
	// cout << wrongAnimal->getType() << endl;
	// cout << wrongCat->getType() << endl;
	// cout << animal->getType() << endl;
	// cout << cat->getType() << endl;
	// cout << dog->getType() << endl;
	// cout << endl;

	// wrongAnimal->makeSound();
	// wrongCat->makeSound(); //will output the cat sound!
	// animal->makeSound();
	// cat->makeSound();
	// dog->makeSound();

	// delete wrongAnimal;
	// delete wrongCat;
	// delete animal;
	// delete cat;
	// delete dog;
}