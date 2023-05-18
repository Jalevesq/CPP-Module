/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:44:00 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 13:23:49 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
    public:
        Weapon(const std::string weapon);
        Weapon();
        ~Weapon();
        const std::string&  getType();
        void    setType(std::string type);
    private:
        std::string _type;
};

#endif