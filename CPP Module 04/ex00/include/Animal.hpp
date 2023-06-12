/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:18:15 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/11 12:58:01 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
using std::string;
using std::cout;
using std::endl;

class Animal {
    public:
        Animal();
        Animal(const Animal &copy);
        virtual ~Animal();
        
        Animal& operator=(const Animal &copy);
        
        virtual void makeSound() const;

        const string& getType() const;
        void    setType(const string newType);
    protected:
        string _type;  
};