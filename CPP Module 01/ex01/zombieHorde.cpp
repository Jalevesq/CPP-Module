/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:53:44 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 12:31:18 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
using std::cout;
using std::endl;
using std::string;

Zombie* zombieHorde( int N, string name )
{
    Zombie *zombieHorde =  new Zombie[N];
    for (int i = 0; i < N; i++)
        zombieHorde[i].setName(name);
    return(zombieHorde);
}