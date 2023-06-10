/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:26:35 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/10 19:27:12 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
using std::string;
using std::cout;
using std::endl;

class ClapTrap {
	public:
		~ClapTrap();
		ClapTrap(const string newName);
		ClapTrap(const ClapTrap &other);
	

		// MANDATORY METHOD //
		void beRepaired(unsigned int amount);
		void takeDamage(unsigned int amount);
		void attack(const std::string& target);

		// GETTER //
		const string&	getName(void) const;
		const unsigned int&		getHitPoint(void) const;
		const unsigned int&		getEnergyPoint(void) const;
		const unsigned int&		getAttackDamage(void) const;
		
		// SETTER //
		void	setName(string newName);
		void	setHitPoint(unsigned int newHitPoint);
		void	setEnergyPoint(unsigned int newEnergyPoint);
		void	setAttackDamage(unsigned int newAttackDamage);

		ClapTrap& operator=(const ClapTrap &other);
	private:
		ClapTrap();
		string _name;
		unsigned int _hitPoint;
		unsigned int	_energyPoint;
		unsigned int _attackDamage;
};