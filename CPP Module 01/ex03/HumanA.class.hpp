/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:45:54 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/14 18:18:52 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

# include "Weapon.class.hpp"
# include <iostream>

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