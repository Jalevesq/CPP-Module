/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:57:59 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/12 09:51:20 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
using std::string;
using std::cout;
using std::endl;

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