/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:34:37 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/09 14:12:35 by jalevesq         ###   ########.fr       */
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
	
	
		bool operator!=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
	
		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator/(const Fixed& other);
		Fixed operator*(const Fixed& other);

		Fixed operator++(int);
		Fixed operator--(int);
		Fixed& operator++(void);
		Fixed& operator--(void);

		static Fixed&	min(Fixed &a, Fixed &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		static Fixed const&	min(Fixed const &a, Fixed const &b);
		static Fixed const&	max(Fixed const &a, Fixed const &b);

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