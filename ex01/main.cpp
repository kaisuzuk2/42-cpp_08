/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:33:11 by kaisuzuk          #+#    #+#             */
/*   Updated: 2026/02/25 15:45:41 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <algorithm>
#include "Span.hpp"
#include "Span.tpp"

void header(int id, const std::string &title) {
    std::cout << "\n========== " << id << ") " << title << " ==========" << std::endl; 
}

int main()
{
    {
        header(0, "PDF");
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    {
        header(1, "size full");
        Span sp = Span(5);
        try {
            sp.addNumber(1);
            sp.addNumber(2);
            sp.addNumber(3);
            sp.addNumber(4);
            sp.addNumber(5);
            sp.addNumber(6); // error;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    {
        header(2, "no span");
        Span sp = Span(1);
        sp.addNumber(1);
        try {
            sp.shortestSpan(); // error
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            sp.longestSpan(); // error
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    {
        header(3, "shortest Span");
        Span sp = Span(10);
        sp.addNumber(5);
        sp.addNumber(1);
        sp.addNumber(9); 
        sp.addNumber(8);
        sp.addNumber(11);
        sp.addNumber(20);
        sp.addNumber(99);
        sp.addNumber(120);
        sp.addNumber(42);
        sp.addNumber(222);
        std::cout << sp.shortestSpan() << std::endl; // result: 9 - 8 = 1
    }

    {
        header(4, "longest Span");
        Span sp = Span(10);
        sp.addNumber(5);
        sp.addNumber(1);
        sp.addNumber(9); 
        sp.addNumber(8);
        sp.addNumber(11);
        sp.addNumber(20);
        sp.addNumber(99);
        sp.addNumber(120);
        sp.addNumber(42);
        sp.addNumber(222);
        std::cout << sp.longestSpan() << std::endl; // result: 222 - 1 = 221
    }

    {
        header(5, "big test");
        Span sp = Span(20000);
        std::vector<int> v(20000);
        std::srand(time(0));
        std::generate(v.begin(), v.end(), std::rand);

        try {
            sp.addNumber(v.begin(), v.end());
            std::cout <<"Shortest: " << sp.shortestSpan() << std::endl;
            std::cout << "Longest: " << sp.longestSpan() << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    {
        header(6, "duplicate number");
        Span sp = Span(5);
        int arr[] = {42, 10, 42, 20, 30};
        sp.addNumber(arr, arr + 5);
        std::cout << "Shortest: " << sp.shortestSpan() << std::endl; // expect 0
    }
    
    {
        header(7, "minus test");
        Span sp = Span(2);
        sp.addNumber(10);
        sp.addNumber(-10);
        std::cout << "Shortest: "<< sp.shortestSpan() << std::endl; // expect 20
    }

    {
        header(8, "limits test");
        Span sp = Span(2);
        sp.addNumber(std::numeric_limits<int>::max());
        sp.addNumber(-std::numeric_limits<int>::max());
        std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp.longestSpan() << std::endl;
    }
}