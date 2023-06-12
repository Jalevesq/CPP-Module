/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 10:18:23 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/12 09:55:08 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

////////////////////////////////////////
/*       CONSTRUCTOR & DESTRUCTOR     */
////////////////////////////////////////

FragTrap::FragTrap(const string newName) {
	cout << "[Parametric Constructor of FragTrap Called]" << endl;
    this->_name = newName;
    this->_hitPoint = 100;
    this->_energyPoint  = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) {
	cout << "[Copy Constructor of FragTrap Called]" << endl;
	*this = other;
}

FragTrap::~FragTrap() {
	cout << "[Destructor for FragTrap Called]" << endl;
}

////////////////////////////////////////
/*           MANDATORY METHOD         */
////////////////////////////////////////

void	FragTrap::attack(const string& target)
{
	if (this->_hitPoint <= 0)
	{
		cout << CYAN << BOLD << "[ATTACK]" << RED << "[DEAD] " << RESET << "FragTrap " << this->_name << " can't attack " << target << " because he has no HP remaining!." << endl;
		return ;
	}
	else if (this->_energyPoint <= 0)
	{
		cout << CYAN << BOLD << "[ATTACK]" << RED << "[FAILED] " << RESET  << "FragTrap " << this->_name << " can't attack " << target << " because he has no energy remaining!" << endl;
		return ;
	}
	cout << CYAN << BOLD << "[ATTACK]" << GREEN << "[SUCCESS] " << RESET  << "FragTrap " << this->_name << " attacked " << target << " and dealt " << this->_attackDamage <<" damage!" << endl;
	this->_energyPoint -= 1;
}

void FragTrap::highFivesGuys(void) {
    if (this->_hitPoint <= 0)
        cout << BOLD << "[HIGH FIVE]" << RED << "[DEAD] " << RESET << "FragTrap " << this->_name << " can't ask for a high five because he is dead (no hp remaining)!" << endl;
    else if (this->_energyPoint <= 0)
        cout << BOLD << "[HIGH FIVE]" << RED << "[FAILED] " << RESET << "FragTrap " << this->_name << " can't ask for a high five because has no energy remaining!" << endl;
    else
    {
        this->_energyPoint -= 1;   
        cout << BOLD << "[HIGH FIVE]" << GREEN << "[SUCCESS] " << RESET << "FragTrap " << this->_name << " ask you for a highfive!" << endl;
    }
}

////////////////////////////////////////
/*          OPERATOR OVERLOAD         */
////////////////////////////////////////

FragTrap& FragTrap::operator=(const FragTrap &other) {
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoint = other.getHitPoint();
		this->_energyPoint = other.getEnergyPoint();
		this->_attackDamage = other.getAttackDamage();
	}
	return (*this);
}