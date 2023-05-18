/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:09:12 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 12:09:41 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cout;
using std::endl;
using std::string;

void randomChump(string name)
{
    Zombie zombie(name);
    zombie.announce();
}