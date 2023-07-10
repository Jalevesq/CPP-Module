/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:26:23 by jalevesq          #+#    #+#             */
/*   Updated: 2023/07/10 18:01:09 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

using std::endl;
using std::cout;
using std::vector;
using std::cerr;
using std::string;

template<typename T>
int	easyfind(std::vector<T> param1, int find) {
	if (sizeof(int) != sizeof(T))
		throw std::logic_error("Type mismatch");
	// Typename est obligé à cause du <T> sinon ça ne compile pas. Le typename permet au compilateur de comprendre que c'est bel et bien une variable et non autre chose.
	typename std::vector<T>::iterator iter;
	for (iter = param1.begin(); iter != param1.end(); iter++)
		if (*iter == find)
			return (find);
	throw std::runtime_error("Element not found");
}