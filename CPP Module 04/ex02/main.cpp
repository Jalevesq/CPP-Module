/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:18:19 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/13 16:26:42 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongAnimal.hpp"
#include "include/Aanimal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongCat.hpp"
#include "include/Brain.hpp"

#define ANIMAL_NBR 10

int main(void)
{
	Aanimal *abc = new Dog();
	abc->makeSound();
	delete abc;

	// Not working because abstract Class
	// Aanimal *def = new Aanimal();
	// def->makeSound();
	// delete def;
}