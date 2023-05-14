/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:42:39 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/13 20:42:52 by jalevesq         ###   ########.fr       */
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

    if (ac != 4)
    {
        std::cerr << "Error: Not good amount of argument." << std::endl;
        return (1);
    }
    s1 = av[2];
    s2 = av[3];
    // Try to open file av[1].
    input_file = av[1];
    std::ifstream infile(input_file);
    if (infile.is_open() == false) {
        std::cerr << "Error: Unable to open infile" << std::endl;
        return (1);
    }

    // Try to create outfile.
    output_file = input_file + ".replace";
    std::ofstream outfile(output_file);
    if (outfile.is_open() == false)
    {
        std::cerr << "Error: Unable to open/create outfile." << std::endl;
        return (1);
    }
    if (outfile.good() == false)
    {
        std::cerr << "Error: Output failed. Not good stream." << std::endl;
        return (1);
    }
    // Remove and replace string.
    while (getline(infile, line)) {
       lastPos = 0;
        while ((lastPos = line.find(s1, lastPos)) != std::string::npos) {
            line = line.substr(0, lastPos) + s2 + line.substr(lastPos + s1.length());
            lastPos += s2.length();
        }
        // cout in outfile
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    std::cout << "Successful replacement of words " << s1 << " by " << s2 << " in " << output_file << std::endl;
}