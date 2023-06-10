/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:58:00 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/10 18:59:19 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define RESET           "\033[0m"
#define BLACK           "\033[30m"
#define RED             "\033[31m"
#define GREEN           "\033[32m"
#define YELLOW          "\033[33m"
#define BLUE            "\033[34m"
#define MAGENTA         "\033[35m"
#define CYAN            "\033[36m"
#define WHITE           "\033[37m"
#define BOLD            "\033[1m"
#define UNDERLINE       "\033[4m"
#define REVERSED        "\033[7m"

////////////////////////////////////////
/*       CONSTRUCTOR & DESTRUCTOR     */
////////////////////////////////////////

ClapTrap::ClapTrap(const string newName) : _name(newName), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
	cout << "[Parametric Constructor of ClapTrap Called]" << RESET << endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	cout << "[Copy Constructor of ClapTrap Called]" << RESET << endl;
	*this = other;
}

ClapTrap::~ClapTrap() {
	cout << "[Destructor for ClapTrap Called]" << RESET << endl;
}

////////////////////////////////////////
/*           MANDATORY METHOD         */
////////////////////////////////////////

void	ClapTrap::attack(const string& target)
{
	if (this->_hitPoint <= 0)
	{
		cout << CYAN << BOLD << "[ATTACK]" << RED << "[DEAD] " << RESET << this->_name << "can't attack " << target << " because he has no HP remaining!." << endl;
		return ;
	}
	else if (this->_energyPoint <= 0)
	{
		cout << CYAN << BOLD << "[ATTACK]" << RED << "[FAILED] " << RESET << this->_name << "can't attack" << target << "because he has no energy remaining!" << endl;
		return ;
	}
	cout << CYAN << BOLD << "[ATTACK]" << GREEN << "[SUCCESS] " << RESET << this->_name << " attacked " << target << " and dealt " << this->_attackDamage <<" damage!" << endl;
	this->_energyPoint -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint <= 0)
		cout << MAGENTA << BOLD << "[TAKE DAMAGE]" << RED << "[DEAD] " << RESET << this->_name << " can't take damage because he is already dead! (No HP remaining)" << endl;
	else if (amount <= 0)
		cout << MAGENTA << BOLD << "[TAKE DAMAGE]" << RED << "[FAILED] " << RESET << this->_name << " did not lose HP! His opponent is too weak!" << endl;
	else if (amount >= this->_hitPoint)
	{
		this->_hitPoint = 0;
		cout << MAGENTA << BOLD << "[TAKE DAMAGE]" << GREEN << "[SUCCESS]" << RED << "[DEAD] " << RESET << this->_name << " has taken " << amount << " damage! He has no hp remaining! " << this->_name << " is dead!" << endl;
	}
	else
	{
		this->_hitPoint -= amount;
		cout << MAGENTA << BOLD << "[TAKE DAMAGE]" << GREEN << "[SUCCESS] " << RESET << this->_name << " has taken " << amount << " damage! ";	
		cout << "he has now " << this->_hitPoint << " HP." << endl;
	}
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint <= 0)
	{
		cout << BLUE << BOLD << "[REPAIRED]" << RED << "[DEAD] " << RESET << this->_name << " can't repair himself because he is dead!"<< endl;
		return ;
	}
	else if (this->_energyPoint <= 0)
	{
		cout << BLUE << BOLD << "[REPAIRED]" << RED << "[FAILED] " << RESET << this->_name << " can't repair himself because he has no energy remaining!"<< endl;
		return ;
	}
	this->_energyPoint -= 1;
	if (amount <= 0)
		cout << BLUE << BOLD << "[REPAIRED]" << RED << "[FAILED] " << RESET << this->_name << " has not repair himself and lose an energy point ! Too bad!"<< endl;
	else
	{
		_hitPoint += amount;
		cout << BLUE << BOLD << "[REPAIRED]" << GREEN << "[SUCCESS] " << RESET << this->_name <<" has repaired himself and gain " << amount << " HP!" << endl;
	}
}

////////////////////////////////////////
/*          OPERATOR OVERLOAD         */
////////////////////////////////////////

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoint = other.getHitPoint();
		this->_energyPoint = other.getEnergyPoint();
		this->_attackDamage = other.getAttackDamage();
	}
	return (*this);
}

////////////////////////////////////////
/*               SETTER               */
////////////////////////////////////////

void	ClapTrap::setName(string newName) {
	this->_name = newName;
}

void	ClapTrap::setHitPoint(unsigned int newHitPoint) {
	if ((int)newHitPoint < 0)
		this->_hitPoint = 0;
	else
		this->_hitPoint = newHitPoint;
}

void	ClapTrap::setEnergyPoint(unsigned int newEnergyPoint) {
	if ((int)newEnergyPoint < 0)
		this->_energyPoint = 0;
	else
		this->_energyPoint = newEnergyPoint;
}

void	ClapTrap::setAttackDamage(unsigned int newAttackDamage) {
	if ((int)newAttackDamage < 0)
		this->_attackDamage = 0;
	else
		this->_attackDamage = newAttackDamage;
}

////////////////////////////////////////
/*               GETTER               */
////////////////////////////////////////

const string& ClapTrap::getName(void) const {
	return(this->_name);
}

const unsigned int& ClapTrap::getHitPoint(void) const {
	return(this->_hitPoint);
}

const unsigned int& ClapTrap::getEnergyPoint(void) const {
	return(this->_energyPoint);
}

const unsigned int& ClapTrap::getAttackDamage(void) const {
	return(this->_attackDamage);
}


////////////////////////////////////////
/*                 ADD                */
////////////////////////////////////////

// void	ClapTrap::addHitPoint(int addHitPoint) {
// 	this->_hitPoint += addHitPoint;
// }

// void	ClapTrap::addEnergyPoint(int addEnergyPoint) {
// 	this->_energyPoint += addEnergyPoint;
// }

// void	ClapTrap::addAttackDamage(int addAttackDamage) {
// 	this->_attackDamage += addAttackDamage;
// }

////////////////////////////////////////
/*              SUBSTRACT             */
////////////////////////////////////////

// void	ClapTrap::subHitPoint(int subHitPoint) {
// 	this->_hitPoint -= subHitPoint;
// }

// void	ClapTrap::subEnergyPoint(int subEnergyPoint) {
// 	this->_energyPoint -= subEnergyPoint;
// }

// void	ClapTrap::subAttackDamage(int subAttackDamage) {
// 	this->_attackDamage -= subAttackDamage;
// }