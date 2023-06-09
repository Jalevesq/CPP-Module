/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 09:46:46 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/09 14:08:41 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
    public:
        Fixed();
        ~Fixed();
	
        Fixed(const int intConstructor);
		Fixed(const float floatConstructor);
        Fixed(const Fixed& other);
	
        Fixed& operator=(const Fixed& other);
		
		int toInt( void ) const;
		float toFloat( void ) const;
		
        int getRawBits( void ) const;
        void setRawBits( const int newRawBits );
    private:
        int _rawBits;
        static const int _binary = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


#endif