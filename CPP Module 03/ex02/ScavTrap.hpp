/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:28:17 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/11 10:18:40 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "ClapTrap.hpp"
# include <iostream>
using std::string;
using std::cout;
using std::endl;

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(const string newName);
        ScavTrap(const ScavTrap &copy);
        ~ScavTrap();

        ScavTrap& operator=(const ScavTrap& other);

        void guardGate();
        void attack(const string& target);
        
        
    private:
        ScavTrap();
};
