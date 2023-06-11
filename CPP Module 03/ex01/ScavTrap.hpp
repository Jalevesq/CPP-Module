/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:28:17 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/11 09:00:41 by jalevesq         ###   ########.fr       */
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

// Quand 2 méthodes qui ont le même nom dans 2 classe et une hérite de l'autre, comment les différenciers ? 

// Comment appeler constructeur/desctructeur d'une classe héritage

// Différence entre appeler une classe héritage en public, privé ou protégé