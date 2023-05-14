/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:42:39 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/13 20:56:09 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


std::ofstream ft_create_file(std::string output_file)
{
    std::ofstream outfile(output_file);
    if (outfile.is_open() == false)
    {
        std::cerr << "Error: Unable to open/create outfile:" << output_file << std::endl;
        return (std::ofstream());
    }
    if (outfile.good() == false)
    {
        std::cerr << "Error: Output failed. Not good stream." << std::endl;
        return (std::ofstream());
    }
    return (outfile);
}

int main(int ac, char **av)
{
    std::string input_file, output_file;
    std::string s1, s2;
    std::string line;
    size_t      lastPos;

    if (ac != 4)
    {
        std::cerr << "Error: Not good amount of argument." << std::endl;
        return (1);
    }
    s1 = av[2];
    s2 = av[3];

    // Ouverture du infile (av[1])
    input_file = av[1];
    std::ifstream infile(input_file);
    if (infile.is_open() == false) {
        std::cerr << "Error: Unable to open infile: " << input_file << std::endl;
        return (1);
    }

    // Création du outfile avec l'extension .replace
    output_file = input_file + ".replace";
    std::ofstream outfile = ft_create_file(output_file);
    if (!outfile)
    {
        infile.close();
        return (1);
    }

    // Remplace chaque occurence s1 par s2 dans outfile.replace
    while (getline(infile, line)) {
       lastPos = 0;
        while ((lastPos = line.find(s1, lastPos)) != std::string::npos) {
            line = line.substr(0, lastPos) + s2 + line.substr(lastPos + s1.length());
            lastPos += s2.length();
        }
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    std::cout << "Successful replacement of words " << s1 << " by " << s2 << " in " << output_file << std::endl;
}