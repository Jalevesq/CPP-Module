/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:57:37 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/13 14:58:02 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"
using std::string;
using std::cout;
using std::endl;

class Dog : public Animal{
    public:
        Dog(const Dog &copy);
        Dog();
        ~Dog();
        
        void makeSound() const;
        Dog& operator=(const Dog &copy);  
    private:
        Brain* dogBrain;      
};