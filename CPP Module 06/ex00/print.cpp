/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:37:21 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/22 12:59:20 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

void printAsChar(string arg)
{
	// CHAR PRINT
	char c = arg[0];
	if (c <= 31)
		cout << CHAR << NON_DISPLAY << endl;
	else
		cout << CHAR << "'" << arg << "'" << endl;
	
	// INT PRINT
	cout << INT << std::fixed <<static_cast<int>(c) << endl; 
	
	// FLOAT PRINT
	cout << FLOAT << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << endl;
	
	//DOUBLE PRINT
	cout << DOUBLE << std::fixed << std::setprecision(1) << static_cast<double>(c) << endl;
}

void printAsInt(string arg)
{
	int new_int;
	
	new_int = std::stoi(arg);
	// CHAR PRINT
	if (new_int <= 127 && new_int >= 0)
	{
		if (new_int <= 31)
			cout << CHAR << NON_DISPLAY << endl;
		else
			cout << CHAR << "'" << static_cast<char>(new_int) << "'" << endl;
	}
	else
		cout << CHAR << IMPOSS << endl;
	// INT PRINT
	cout << INT << new_int << endl;
	
	// FLOAT PRINT
	cout << FLOAT << std::fixed << std::setprecision(1) << static_cast<float>(new_int) << "f" << endl;
	
	// DOUBLE PRINT
	cout << DOUBLE << std::fixed << std::setprecision(1) << static_cast<double>(new_int) << endl;
}

void printAsDouble(string arg)
{
	double new_double;
	
	new_double = std::stod(arg);
	// CHAR PRINT
	if (new_double <= 127 && new_double >= 0)
	{
		if (new_double <= 31)
			cout << CHAR << NON_DISPLAY << endl;
		else
			cout << CHAR << "'" << static_cast<char>(new_double) << "'" << endl;
	}
	else
		cout << CHAR << IMPOSS << endl;
	// INT PRINT
	if (new_double > INT_MAX || new_double < INT_MIN)
		cout << INT << IMPOSS << endl;
	else
		cout << INT << static_cast<int>(new_double) << endl;
	
	// FLOAT PRINT
	cout << FLOAT << std::fixed << std::setprecision(1) << static_cast<float>(new_double) << "f" << endl;
	
	// DOUBLE PRINT
	cout << DOUBLE << std::fixed << std::setprecision(1) << new_double << endl;
}

void printAsFloat(string arg)
{
	float new_float;
	
	new_float = std::stod(arg);
	// CHAR PRINT
	if (new_float <= 127 && new_float >= 0)
	{
		if (new_float <= 31)
			cout << CHAR << NON_DISPLAY << endl;
		else
			cout << CHAR << "'" << static_cast<char>(new_float) << "'" << endl;
	}
	else
		cout << CHAR << IMPOSS << endl;
	// INT PRINT
	if (new_float > INT_MAX || new_float < INT_MIN)
		cout << INT << IMPOSS << endl;
	else
		cout << INT << static_cast<int>(new_float) << endl;
	
	// FLOAT PRINT
	cout << FLOAT << std::fixed << std::setprecision(1) << new_float << "f" << endl;
	
	// DOUBLE PRINT
	cout << DOUBLE << std::fixed << std::setprecision(1) << static_cast<double>(new_float) << endl;	
}

void printAsMath(string arg)
{
	cout << CHAR << IMPOSS << endl;
	cout << INT << IMPOSS << endl;
	if (arg == "nan" || arg == "nanf")
	{
		cout << FLOAT << "nanf" << endl;
		cout << DOUBLE << "nan" << endl;
	}
	else if (arg == "+inf" || arg == "-inf")
	{
		cout << FLOAT << arg + "f" << endl;
		cout << DOUBLE << arg << endl;
	}
	else if (arg == "+inff" || arg == "-inff")
	{
		cout << FLOAT << arg << endl;
		cout << DOUBLE << arg.substr(0, arg.length()-1) << endl;
	}
}