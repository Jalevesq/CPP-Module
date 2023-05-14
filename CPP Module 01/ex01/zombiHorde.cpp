/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiHorde.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:53:44 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/14 18:20:22 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombieHorde =  new Zombie[5];
    for (int i = 0; i < N; i++)
        zombieHorde[i].setName(name);
    return(zombieHorde);
}