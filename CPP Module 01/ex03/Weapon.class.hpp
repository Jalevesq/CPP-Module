/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:44:00 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/14 18:18:29 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

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