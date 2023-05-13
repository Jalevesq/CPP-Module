/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:45:54 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/13 10:04:04 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
    public:
        ~HumanA();
        HumanA(std::string name, Weapon& weapon);
        void    attack();
    private:
        HumanA();
        std::string _name;
        Weapon& _weapon;
};

#endif