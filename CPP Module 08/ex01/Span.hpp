/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:24:16 by jalevesq          #+#    #+#             */
/*   Updated: 2023/07/12 12:19:05 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::cerr;

class Span {
    public:
    Span(unsigned int range);
    ~Span();
    void    addNumber(int numberToAdd);
	void	addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
    void    printList();
    unsigned int shortestSpan();
    unsigned int longestSpan();

    std::vector<int> copy_n_sort_vector();
    
    private:
    Span();
    const unsigned int _listSize;
    unsigned int _listCounter;
    std::vector<int> _list;
};