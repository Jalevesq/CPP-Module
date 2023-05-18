/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:42:39 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/18 13:30:43 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::cerr;
using std::ifstream;

int main(int ac, char **av)
{
   string input_file, output_file;
   string s1, s2;
   string line;
    size_t      lastPos;

    if (ac != 4)
    {
       cerr << "Error: Not good amount of argument." <<endl;
        return (1);
    }
    s1 = av[2];
    s2 = av[3];
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: arg s1 or s2 is empty." <<endl;
		return (1);
	}
	/*/////////////////////////////////
    	Ouverture du infile (av[1])
	/*//////////////////////////////////
    input_file = av[1];
   ifstream infile(input_file);
    if (infile.is_open() == false) {
       cerr << "Error: Unable to open infile: " << input_file <<endl;
        return (1);
    }

	/*////////////////////////////////////////////////
    	Création du outfile avec l'extension .replace
	/*////////////////////////////////////////////////
    output_file = input_file + ".replace";
	std::ofstream outfile(output_file);
    if (outfile.is_open() == false)
    {
       cerr << "Error: Unable to create outfile:" << output_file <<endl;
        return (1);
    }
    if (outfile.good() == false)
    {
       cerr << "Error: Output failed. Not good stream." <<endl;
        return (1);
    }
    if (!outfile)
    {
        infile.close();
        return (1);
    }

	/*///////////////////////////////////////////////////////////
    	Remplace chaque occurence s1 par s2 dans outfile.replace
	/*///////////////////////////////////////////////////////////
    while (getline(infile, line)) {
       lastPos = 0;
        while ((lastPos = line.find(s1, lastPos)) !=string::npos) {
            line = line.substr(0, lastPos) + s2 + line.substr(lastPos + s1.length());
            lastPos += s2.length();
        }
    	if (!infile.eof()) {
        	outfile << line << endl;
   		} else {
        	outfile << line;
    	}
    }
    infile.close();
    outfile.close();
   cout << "Successful replacement of words " << s1 << " by " << s2 << " in " << output_file <<endl;
}