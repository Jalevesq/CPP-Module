/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:23:17 by jalevesq          #+#    #+#             */
/*   Updated: 2023/07/11 19:30:26 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main(void)
{
    Span newSpan(5);
    
    // for (int i = 20; i > 0; i -= 2)
    //     newSpan.addNumber(i);

    newSpan.addNumber(2147483647);
    newSpan.addNumber(3);
    newSpan.addNumber(-2147483647);
    newSpan.addNumber(-2147483647);
    newSpan.addNumber(-2147483648);
    cout << endl;
    newSpan.printList();
    cout << endl;

    unsigned int longest_span = newSpan.longestSpan();
    unsigned int shortest_span = newSpan.shortestSpan();
    cout << "Shortest Span: " << shortest_span << endl;
    cout << "Longest Span: " << longest_span << endl;

}