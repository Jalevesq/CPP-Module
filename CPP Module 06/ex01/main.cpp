/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:22:05 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/22 14:34:16 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

using std::string;
using std::cerr;
using std::cout;
using std::endl;

typedef struct s_Data {
	int	number;
}	Data;

uintptr_t serialize(Data* ptr)
{
	uintptr_t u_ptr;
	u_ptr = reinterpret_cast<uintptr_t>(ptr);
	return(u_ptr);
	
}

Data* deserialize(uintptr_t raw)
{
	Data *new_ptr;
	new_ptr = reinterpret_cast<Data *>(raw);
	return (new_ptr);
}

int main(void)
{
	Data ptr;
	Data *old_data;
	uintptr_t new_ptr;

	ptr.number = 467;

	new_ptr = serialize(&ptr);
	old_data = deserialize(new_ptr);

	cout << &old_data << endl;
	std::cout << old_data->number << std::endl;
}