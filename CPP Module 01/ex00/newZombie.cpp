/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:08:20 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 12:09:46 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cout;
using std::endl;
using std::string;
Zombie  *newZombie(string name)
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}