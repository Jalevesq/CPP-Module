/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 22:14:55 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/14 18:16:40 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP

#include <iostream>

class Harl {
    public:
        Harl();
        ~Harl();
        void complain( std::string level );
    private:
        void debug ( void );
        void info ( void );
        void warning ( void );
        void error ( void );
};

#endif