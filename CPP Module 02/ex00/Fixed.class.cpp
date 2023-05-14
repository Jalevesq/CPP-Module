/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 09:46:44 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/14 18:24:24 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

// Constructeur de recopie ? C'est quoi ?

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _number = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
