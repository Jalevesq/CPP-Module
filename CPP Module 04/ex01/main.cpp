/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:18:19 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/13 15:10:57 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongAnimal.hpp"
#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongCat.hpp"
#include "include/Brain.hpp"

#define ANIMAL_NBR 10

int main(void)
{
	Animal *animalList[ANIMAL_NBR];
	for (int i = 0; i < ANIMAL_NBR; i++)
	{
		if (i < ANIMAL_NBR / 2)
			animalList[i] = new Dog();
		else if (i >= ANIMAL_NBR / 2)
			animalList[i] = new Cat();
	}
	
	for (int i = 0; i < ANIMAL_NBR - 1; i++)
	{
		delete animalList[i];
	}
	return 0;
}