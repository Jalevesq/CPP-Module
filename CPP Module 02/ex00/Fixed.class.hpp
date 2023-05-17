/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 09:46:46 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/17 18:54:56 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class Fixed {
    public:
        Fixed();
        Fixed(int number);
        Fixed(const Fixed& other);
        ~Fixed();
        Fixed& operator=(const Fixed& other);
        const int &getRawBits( void ) const;
        void setRawBits( const int raw );
    private:
        int _number;
        static const int _binary = 8; // ?
};

#endif