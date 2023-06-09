/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:57:59 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/09 17:06:22 by jalevesq         ###   ########.fr       */
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
		void beRepaired(unsigned int amount);
		void takeDamage(unsigned int amount);
		void attack(const std::string& target);

		const string&	getName(void) const;
		const int&		getHitPoint(void) const;
		const int&		getEnergyPoint(void) const;
		const int&		getAttackDamage(void) const;
		
		void	setName(string newName);
		void	setHitPoint(int newHitPoint);
		void	setEnergyPoint(int newEnergyPoint);
		void	setAttackDamage(int newAttackDamage);

		void	addHitPoint(int addHitpoint);
		void	addEnergyPoint(int addEnergyPoint);
		void	addAttackDamage(int addAttackDamage);

		void	subHitPoint(int subHitpoint);
		void	subEnergyPoint(int subEnergyPoint);
		void	subAttackDamage(int subAttackDamage);

		ClapTrap& operator=(const ClapTrap &other);
	private:
		ClapTrap();
		string _name;
		int _hitPoint;
		int	_energyPoint;
		int _attackDamage;
};