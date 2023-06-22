/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:02:14 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/22 16:39:26 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

int getType(string arg)
{
	// try inf/nan
	if (arg == "+inf" || arg == "-inf" || arg == "+inff" || arg == "-inff" || arg == "nan" || arg == "nanf")
		return (4);
	// try char
	else if (arg.length() == 1 && arg.find_first_of("0123456789") == string::npos)
		return (0);
	try
	{
		// try int
		std::stoi(arg);
		if (arg.find_first_not_of("0123456789+-") != string::npos)
			throw(std::invalid_argument("Not an int"));
		return (1);
	}
	catch (std::exception)
	{
		try
		{
			// try double
			std::stod(arg);
			if (arg.find_first_not_of("0123456789.+-") != string::npos)
				throw(std::invalid_argument("Not a double"));
			return (2);
		}
		catch (std::exception)
		{
			try
			{
				// try float
				std::stof(arg);
				if (arg.find_first_not_of("0123456789f.+-") != string::npos)
					throw(std::invalid_argument("Not a float"));
				return (3);
			}
			catch (std::exception)
			{
				return (-1);
			}
		}
	}
	return (-1);
}

bool ft_checkstr(string arg)
{
	if (arg == "+inf" || arg == "-inf" || arg == "+inff" || arg == "-inff" || arg == "nan" || arg == "nanf")
		return (true);
    std::string::size_type firstIndex = arg.find('f');
    std::string::size_type secondIndex = arg.find('f', firstIndex + 1);

    if (firstIndex != std::string::npos && secondIndex != std::string::npos) {
        std::cout << "Problem with 'f', is it a float? Example of use: 2.0f" << std::endl;
        return false;
    }
	firstIndex = arg.find('.');
	secondIndex = arg.find('.', firstIndex + 1);
	if (firstIndex != string::npos && secondIndex != string::npos)
	{
		cout << "Problem with '.', is it a float/double? Example of use: 2.0f or 2.0" << endl; 
		return (false);
	}
	return (true);
}

// Faire des checks du input. Que le F de float bien a la fin et seul F, Qu'il y a qu'un seul "." dans le string, etc.
int main(int ac, char **av)
{
	string arg;

	if (ac != 2)
	{
		cerr << "Error" << endl
			 << "Not good amount of argument. Exemple > ./ex00 a - ./ex00 2 - ./ex00 2.0f - ./ex00 2.0" << endl;
		return (1);
	}
	arg = av[1];
	if (ft_checkstr(arg) == false)
		return (1);
	switch (getType(arg))
	{
	case 0:
		printAsChar(arg);
		break;
	case 1:
		printAsInt(arg);
		break;
	case 2:
		printAsDouble(arg);
		break;
	case 3:
		printAsFloat(arg);
		break;
	case 4:
		printAsMath(arg);
		break;
	default:
		printImpossible(arg);
	}
	// cout << "int: " << static_cast<int>(av[1]) << endl;
}
