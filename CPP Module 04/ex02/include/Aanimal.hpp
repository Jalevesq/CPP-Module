/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:18:15 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/13 16:15:26 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
using std::string;
using std::cout;
using std::endl;

class Aanimal {
    public:
        Aanimal();
        Aanimal(const Aanimal &copy);
        virtual ~Aanimal();
        
        Aanimal& operator=(const Aanimal &copy);
        
        virtual void makeSound() const = 0;

        const string& getType() const;
        void    setType(const string newType);
    protected:
        string _type;  
};