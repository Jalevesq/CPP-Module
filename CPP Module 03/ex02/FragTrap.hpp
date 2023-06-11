/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 10:18:31 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/11 10:24:54 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "ClapTrap.hpp"
# include <iostream>
using std::string;
using std::cout;
using std::endl;

class FragTrap : public ClapTrap {
    public:
        FragTrap(const string newName);
        FragTrap(const FragTrap &copy);
        ~FragTrap();

        FragTrap& operator=(const FragTrap& other);

        void guardGate();
        void highFivesGuys(void);
        void attack(const string& target);
        
        
    private:
        FragTrap();
};