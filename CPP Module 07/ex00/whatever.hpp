/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:46:15 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/23 12:54:47 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::string;
using std::cerr;
using std::cout;
using std::endl;

template <typename T>
void swap(T& x, T& y)
{
    T tmp;

    tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T min(T& x, T& y)
{
    return (x < y ? x : y);
}

template <typename T>
T max(T& x, T& y)
{
    return (x > y ? x : y);
}