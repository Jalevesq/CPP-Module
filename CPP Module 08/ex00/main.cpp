/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:26:21 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/26 16:04:55 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> abc;
	for (int i = 0; i < 30; i += 3)
		abc.push_back(i);
	cout << easyfind(abc, 30) << endl;
}