/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:12:34 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/15 12:36:56 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


// ** PLUS LIRE SUR CE QU'EST UNE REFERENCE **
int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "Addresse de string: "<< &string << std::endl;
    std::cout << "Addresse de stringPTR: "<< stringPTR << std::endl;
    std::cout << "Addresse de stringREF: "<< &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Contenu de string: "<< string << std::endl;
    std::cout << "Contenu de stringPTR: "<< *stringPTR << std::endl;
    std::cout << "Contenu de stringREF: "<< stringREF << std::endl;
}