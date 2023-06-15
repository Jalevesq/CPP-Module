/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:54:09 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/14 21:49:45 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw() {
            return ("GradeTooHighException");
        }
};

class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw() {
            return ("GradeTooLowException");
        }
};