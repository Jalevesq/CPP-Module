/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:37:34 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/22 15:58:23 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using std::string;
using std::cerr;
using std::cout;
using std::endl;

#define CHAR "char: "
#define INT "int: "
#define FLOAT "float: "
#define DOUBLE "double: "

#define NON_DISPLAY "non displayable"
#define IMPOSS "impossible"

void printAsChar(string arg);
void printAsInt(string arg);
void printAsDouble(string arg);
void printAsFloat(string arg);
void printAsMath(string arg);
void printImpossible(string arg);