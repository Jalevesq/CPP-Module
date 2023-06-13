/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:27:06 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/13 15:39:32 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"
using std::string;
using std::cout;
using std::endl;

class Cat : public Animal{
    public:
        Cat(const Cat &copy);
        Cat();
        ~Cat();
        
        void makeSound() const;
        Cat& operator=(const Cat &copy);     
    private:
        Brain* _catBrain;
};