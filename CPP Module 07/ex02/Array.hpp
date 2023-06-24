/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 11:28:31 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/24 12:36:22 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
using std::string;
using std::cerr;
using std::cout;
using std::endl;

template<typename T>
class Array {
	public:
		Array() { _array = nullptr; }
		Array(unsigned int n) : _size(n) {
			_array = new T[n];
		}
		Array(const Array& src) {
			this->_size = src.size();
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = src.getArrayIndex(i);
		};
		~Array() {
			if (this->_array != nullptr)
					delete[] this->_array;
		}
		Array &		operator=( Array const & rhs ) {
			if (this != &rhs)
			{
				this->_size = rhs.size();
				if (this->_array != nullptr)
					delete[] this->_array;
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = rhs.getArrayIndex(i);
			}
			return (*this);
		};

		void setArray(T n) {
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = n;
		};
		T& getArrayIndex(unsigned int n) const  {
			return (this->_array[n]);
		}
		void printArray() {
			for (unsigned int i = 0; i < _size; i++)
				cout << _array[i] << endl;
		}
		const unsigned int& size() const { return (this->_size); }
	private:
		T* _array;
		unsigned int _size;
};