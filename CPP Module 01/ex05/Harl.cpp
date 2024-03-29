/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:58:25 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 13:31:35 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Constructor for Harl Called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Destructor for Harl Called" << std::endl;
}

void    Harl::complain(std::string level)
{
    void(Harl::*ptrfunc[])()  = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string _level[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    
    for (int i = 0; i < 4; i++)
    {
        if (_level[i] == level)
        {
            (this->*ptrfunc[i])();
            return ;
        }
    }
    std::cout << "Level " << level << " not recognize. You can use: DEBUG, INFO, WARNING or ERROR" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
