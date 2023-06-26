/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:26:23 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/26 16:04:48 by jalevesq         ###   ########.fr       */
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
		return (INT_MIN);
	typename std::vector<T>::iterator iter;
	for (typename std::vector<T>::iterator iter = param1.begin(); iter != param1.end(); iter++)
		if (*iter == find)
			return (find);
	throw (std::exception());
}