/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:58:00 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/09 17:06:15 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BOLD    "\033[1m"

////////////////////////////////////////
/*       CONSTRUCTOR & DESTRUCTOR     */
////////////////////////////////////////

ClapTrap::ClapTrap(const string newName) : _name(newName), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
	cout << GREEN << BOLD << "[Parametric Constructor of ClapTrap Called]" << RESET << endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	cout << GREEN << BOLD << "[Copy Constructor of ClapTrap Called]" << RESET << endl;
	*this = other;
}

ClapTrap::~ClapTrap() {
	cout << RED << BOLD << "[Destructor for ClapTrap Called]" << RESET << endl;
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
/*                 SETTER             */
////////////////////////////////////////

void	ClapTrap::setName(string newName) {
	this->_name = newName;
}

void	ClapTrap::setHitPoint(int newHitPoint) {
	this->_hitPoint = newHitPoint;
}

void	ClapTrap::setEnergyPoint(int newEnergyPoint) {
	this->_energyPoint = newEnergyPoint;
}

void	ClapTrap::setAttackDamage(int newAttackDamage) {
	this->_attackDamage = newAttackDamage;
}

////////////////////////////////////////
/*                 GETTER             */
////////////////////////////////////////

const string& ClapTrap::getName(void) const {
	return(this->_name);
}

const int& ClapTrap::getHitPoint(void) const {
	return(this->_hitPoint);
}

const int& ClapTrap::getEnergyPoint(void) const {
	return(this->_energyPoint);
}

const int& ClapTrap::getAttackDamage(void) const {
	return(this->_attackDamage);
}


////////////////////////////////////////
/*                 ADD                */
////////////////////////////////////////

void	ClapTrap::addHitPoint(int addHitPoint) {
	this->_hitPoint += addHitPoint;
}

void	ClapTrap::addEnergyPoint(int addEnergyPoint) {
	this->_energyPoint += addEnergyPoint;
}

void	ClapTrap::addAttackDamage(int addAttackDamage) {
	this->_attackDamage += addAttackDamage;
}

////////////////////////////////////////
/*              SUBSTRACT             */
////////////////////////////////////////

void	ClapTrap::subHitPoint(int subHitPoint) {
	this->_hitPoint -= subHitPoint;
}

void	ClapTrap::subEnergyPoint(int subEnergyPoint) {
	this->_energyPoint -= subEnergyPoint;
}

void	ClapTrap::subAttackDamage(int subAttackDamage) {
	this->_attackDamage -= subAttackDamage;
}