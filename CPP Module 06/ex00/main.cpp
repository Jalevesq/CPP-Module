/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:02:14 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/22 13:00:29 by jalevesq         ###   ########.fr       */
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

void printImpossible(string arg)
{
	(void)arg;
	cout << CHAR << IMPOSS << endl;
	cout << INT << IMPOSS << endl;
	cout << FLOAT << IMPOSS << endl;
	cout << DOUBLE << IMPOSS << endl;
}

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
