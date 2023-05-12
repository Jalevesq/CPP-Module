/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:53:42 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/11 20:02:28 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void    announce( void );
        void    setName(std::string name);
    private:
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif