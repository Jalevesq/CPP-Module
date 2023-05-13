/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:42:39 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/13 16:58:14 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    std::string output_file;
    std::string input_file;
    std::string s1;
    std::string s2;
    std::string line;
    size_t lastPos;
    size_t lastlastpos;

    if (ac < 2)
    {
        std::cerr << "Error: Not good amount of argument." << std::endl;
        return (1);
    }
    // Try to open file av[1]
    input_file = av[1];
    s1 = av[2];
    s2 = av[3];
    std::ifstream infile(input_file);
    if (infile.is_open() == false) {
        std::cerr << "Unable to open infile" << std::endl;
        return (1);
    }
    // output_file = input_file + ".replace";
    // std::ofstream outfile(output_file);
    // if (outfile.is_open() == false)
    // {
    //     std::cout << "Unable to open/create outfile." << std::endl;
    //     return (1);
    // }
    while (getline(infile, line)) {
       lastPos = line.find(s1);
        while (lastPos != std::string::npos) {
            line = line.substr(, );
            lastlastpos = lastPos;
            lastPos = line.find(s1, lastPos + 1);
        }
        std::cout << line << std::endl;
    }
    infile.close();
}
            // line.erase(lastPos, s1.length());
            // line.insert(lastPos, s2);