/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:08:48 by jalevesq          #+#    #+#             */
/*   Updated: 2023/07/12 13:48:16 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <stack>
#include <list>

int main(void) {
	// Example pour monter que la stack n'a pas d'itérateur
	// std::stack<int> test;

	// std::stack<int>::iterator ite = test.begin()
	
	// With MutantStack Container
	std::cout << "MutantStack" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	std::cout << "Itérer à travers le container MutantStack: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	// With List Container
	std::cout << std::endl << "List" << std::endl;
	std::list<int> myList;
    myList.push_back(5);
    myList.push_back(17);
    std::cout << myList.back() << std::endl;
    myList.pop_back();
    std::cout << myList.size() << std::endl;
    myList.push_back(3);
    myList.push_back(5);
    myList.push_back(737);
    //[...]
    myList.push_back(0);
    std::list<int>::iterator itt = myList.begin();
    std::list<int>::iterator itee = myList.end();
    
    ++itt;
    --itt;
	std::cout << "Itérer à travers le container List: " << std::endl;
    while (itt != itee)
    {
        std::cout << *itt << std::endl;
        ++itt;
    }
}