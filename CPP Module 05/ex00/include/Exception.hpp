/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:54:09 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/14 21:05:18 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw() {
            return ("Bureaucrat::GradeTooHighException");
        }
};

class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw() {
            return ("Bureaucrat::GradeTooLowException");
        }
};