/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:23:09 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 11:34:41 by jalevesq         ###   ########.fr       */
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
    private:
        string _name;
};

Zombie  *newZombie(string name);
void randomChump(string name);

#endif