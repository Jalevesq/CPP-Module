/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 09:46:46 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/14 18:24:20 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed {
    public:
        Fixed();
        ~Fixed();
        const int getRawBits( void );
        void setRawBits( int const raw );
    private:
        int _number;
        const int _binary; // ?
};

#endif