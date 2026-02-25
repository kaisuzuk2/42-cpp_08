/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:36:43 by kaisuzuk          #+#    #+#             */
/*   Updated: 2026/02/25 10:51:00 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "easyfind.tpp"
#include <vector>

int main(void) {
    std::vector<int>::iterator it;
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    
    try {
        it = easyfind(v, 1); // ok
        std::cout << "result = " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        it = easyfind(v, 10); //error
        std::cout << "result = " << *it << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}