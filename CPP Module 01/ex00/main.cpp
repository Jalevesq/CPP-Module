/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:21:57 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/14 18:21:08 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.class.hpp"

int main(void)
{
    Zombie *Bob = newZombie("Bob");
    Bob->announce();
    randomChump("Roger");
    delete(Bob);
    return (0);
}