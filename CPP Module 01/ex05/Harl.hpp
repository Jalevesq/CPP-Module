/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:58:15 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/13 21:58:05 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

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