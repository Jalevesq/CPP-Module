/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:13:13 by jalevesq          #+#    #+#             */
/*   Updated: 2023/06/22 15:55:20 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::string;
using std::cerr;
using std::cout;
using std::endl;

class Base  {
	public:
	virtual ~Base( void ) {}
};
class A: public Base{};
class B: public Base{};
class C: public Base{};

Base* generate(void) {
	srand(static_cast<unsigned int>(time(0)));
	int value = 1 + (rand() % (3 - 1 + 1));

	if (value == 1)
	{
		cout << "Return A Class" << endl;
		return (new A);
	}
	else if (value == 2)
	{
		cout << "Return B Class" << endl;
		return (new B);
	}
	else if (value == 3)
	{
		cout << "Return C Class" << endl;
		return (new C);
	}
	return (NULL);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		cout << "Random Class by ptr is A !" << endl;
	else if (dynamic_cast<B*>(p) != NULL)
		cout << "Random Class by ptr is B !" << endl;
	else if (dynamic_cast<C*>(p) != NULL)
		cout << "Random Class by ptr is C !" << endl;
	else
		cout << "Random Class by ptr not recognized." << endl;
}

void identify(Base& p) {
	try {
		Base &Wich_Class1 = dynamic_cast<A&>(p);
		(void)Wich_Class1;	
		cout << "Random Class by ref is A !" << endl;
		return ;
	} catch (std::exception) {
		try {
			Base &Wich_Class2 = dynamic_cast<B&>(p);
			(void)Wich_Class2;
			cout << "Random Class by ref is B !" << endl;
			return ;
		} catch (std::exception) {
			Base &Wich_Class3 = dynamic_cast<C&>(p);
			(void)Wich_Class3;
			cout << "Random Class by ref is C !" << endl;
			return ;
		}
	}
	cout << "Random Class by ref not recognized." << endl;
}

int main(void)
{
	Base *random_Class = generate();
	identify(random_Class);
	identify(*random_Class);
	delete random_Class;
}
