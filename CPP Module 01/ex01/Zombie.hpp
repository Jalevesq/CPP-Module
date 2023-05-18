/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:53:42 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 12:31:24 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
using std::cout;
using std::endl;
using std::string;

class Zombie {
    public:
        Zombie();
        Zombie(string name);
        ~Zombie();
        void    announce( void );
        void    setName(string name);
    private:
        string _name;
};

Zombie* zombieHorde( int N, string name );

#endif