/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:55:58 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/26 10:18:08 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
using std::cout;
using std::endl;


template<typename T>
void printElement(T& element) {
    cout << element << endl;
}

template<typename T>
void iter(T *tab, size_t size, void (&func)(T&)) {
    for (size_t i = 0; i < size; ++i) {
        func(tab[i]);
    }
}