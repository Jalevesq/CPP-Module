/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:30:29 by jalevesq          #+#    #+#             */
/*   Updated: 2023/07/12 15:43:46 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int range) : _listSize(range) {
    // cout << "Constructor of Span Called" << endl;
   this->_listCounter = 0;
}

Span::Span(const Span& other) : _listSize(other._listSize), _listCounter(other._listCounter), _list(other._list) {}

Span::~Span() {
    // cout << "Destructor of Span Called" << endl;
}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        _listSize = other._listSize;
        _listCounter = other._listCounter;
        _list = other._list;
    }
    return *this;
}

void	Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	for (std::vector<int>::iterator it = start; it != end; it++)
		Span::addNumber(*it);
}

void    Span::addNumber(int numberToAdd) {
    if (this->_listCounter >= this->_listSize)
	    throw std::runtime_error("Too many element");
    this->_list.push_back(numberToAdd);
    // cout << "Number " << numberToAdd << " perfectly add at position " << this->_listCounter << "/" << this->_listSize - 1 <<endl;
    this->_listCounter++;
}

void Span::printList() {
    for (unsigned int i = 0; i < this->_listCounter; i++)
        cout << _list.at(i) << " ";

    cout << endl << "List Capacity: " << this->_listCounter << "/" << this->_listSize << endl;
}

std::vector<int> Span::copy_n_sort_vector() {
    std::vector<int> newList;

    if (_listCounter < 2)
        throw std::runtime_error("Not enough element in list");
    std::copy(this->_list.begin(), this->_list.end(), std::back_inserter(newList));
    std::sort(newList.begin(), newList.end());   
    return (newList);
}

unsigned int Span::shortestSpan() {
    std::vector<int> newList;
    unsigned int lowest;
    unsigned int result;
  
    lowest = UINT_MAX;
    newList = copy_n_sort_vector();

    for (unsigned int i = 0; i < _listCounter; i++)
    {
        result = UINT_MAX;
        if (i > 0)
        {
            result = newList.at(i) - newList.at(i - 1);
            if (result < lowest)
                lowest = result;
        }
        result = UINT_MAX;
        if (i + 1 < _listCounter)
        {
            result = newList.at(i) - newList.at(i + 1);
            if (result < lowest)
                lowest = result;
        }
    }
    return (lowest);
}


unsigned int Span::longestSpan() {
    std::vector<int> newList;
    int end;

    newList = copy_n_sort_vector();
    // for (unsigned int i = 0; i < this->_listCounter; i++)
    //     cout << newList.at(i) << " ";
    // cout << endl;
    end = newList.at(this->_listCounter - 1);
    // cout << end << " - " << *newList.begin() << endl;
    return (end - *newList.begin());
}