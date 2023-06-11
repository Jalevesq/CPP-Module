/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:28:15 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/11 09:21:28 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

////////////////////////////////////////
/*       CONSTRUCTOR & DESTRUCTOR     */
////////////////////////////////////////

ScavTrap::ScavTrap(const string newName) {
	cout << "[Parametric Constructor of ScavTrap Called]" << endl;
    this->_name = newName;
    this->_hitPoint = 100;
    this->_energyPoint  = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	cout << "[Copy Constructor of ScavTrap Called]" << endl;
	*this = other;
}

ScavTrap::~ScavTrap() {
	cout << "[Destructor for ScavTrap Called]" << endl;
}

////////////////////////////////////////
/*           MANDATORY METHOD         */
////////////////////////////////////////

void	ScavTrap::attack(const string& target)
{
	if (this->_hitPoint <= 0)
	{
		cout << CYAN << BOLD << "[ATTACK]" << RED << "[DEAD] " << RESET << "ScavTrap " << this->_name << " can't attack " << target << " because he has no HP remaining!." << endl;
		return ;
	}
	else if (this->_energyPoint <= 0)
	{
		cout << CYAN << BOLD << "[ATTACK]" << RED << "[FAILED] " << RESET  << "ScavTrap " << this->_name << " can't attack " << target << " because he has no energy remaining!" << endl;
		return ;
	}
	cout << CYAN << BOLD << "[ATTACK]" << GREEN << "[SUCCESS] " << RESET  << "ScavTrap " << this->_name << " attacked " << target << " and dealt " << this->_attackDamage <<" damage!" << endl;
	this->_energyPoint -= 1;
}

void    ScavTrap::guardGate() {
    if (this->_hitPoint <= 0) {
        cout << YELLOW << BOLD << "[GUARD KEEPER]" << RED << "[DEAD] " << RESET << this->_name << " can't go into Guate Keeper mode because he is dead (no HP remaining)!" << endl;
        return ;
    }
    else if (this->_energyPoint <= 0)
    {
        cout << YELLOW << BOLD << "[GUARD KEEPER]" << RED << "[FAILED] " << RESET << this->_name << " can't go into Guate Keeper mode because he has no energy remaining!" << endl;
        return ;
    }
    this->_energyPoint -= 1;
    cout << YELLOW << BOLD << "[GUARD KEEPER]" << GREEN << "[SUCCESS] " << RESET << this->_name << " went into Guate Keeper mode!" << endl;
}

////////////////////////////////////////
/*          OPERATOR OVERLOAD         */
////////////////////////////////////////

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoint = other.getHitPoint();
		this->_energyPoint = other.getEnergyPoint();
		this->_attackDamage = other.getAttackDamage();
	}
	return (*this);
}