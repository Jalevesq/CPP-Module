/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:12:34 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 12:42:46 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main(void)
{
    string string = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    cout << "Addresse de string: "<< &string << endl;
    cout << "Addresse de stringPTR: "<< stringPTR << endl;
    cout << "Addresse de stringREF: "<< &stringREF << endl;
    cout << endl;
    cout << "Contenu de string: "<< string << endl;
    cout << "Contenu de stringPTR: "<< *stringPTR << endl;
    cout << "Contenu de stringREF: "<< stringREF << endl;
}