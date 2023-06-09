/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 09:46:46 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/09 14:07:13 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
    public:
        Fixed();
        Fixed(int number);
        Fixed(const Fixed& other);
        ~Fixed();
        Fixed& operator=(const Fixed& other);
        int getRawBits( void ) const;
        void setRawBits( const int raw );
    private:
        int _number;
        static const int _binary = 8;
};

#endif