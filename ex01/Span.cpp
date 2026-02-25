/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:12:14 by kaisuzuk          #+#    #+#             */
/*   Updated: 2026/02/25 15:24:34 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0) {}

Span::Span(unsigned int n): _N(n) {
    this->_v.reserve(n);
}

Span::Span(const Span &other) {
    *this = other;
}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        this->_N = other._N;
        this->_v = other._v;
    }
    return (*this);
}

Span::~Span() {};

void Span::addNumber(int val) {
    if (_v.size() >= _N)
        throw FullException();
    _v.push_back(val);
}

long int Span::shortestSpan() const {
    std::vector<int> copy;
    long min;
    size_t size;

    if (this->_v.size() <= 1)
        throw NoSpanException();
    copy = this->_v;
    std::sort(copy.begin(), copy.end());
    min = static_cast<long int>(copy[1]) - static_cast<long int>(copy[0]);
    size = copy.size();
    for (size_t i = 1; i + 1 < size; i++) {
        if (static_cast<long int>(copy[i + 1]) - static_cast<long int>(copy[i]) < min)
            min = static_cast<long int>(copy[i + 1]) - static_cast<long int>(copy[i]);
    }
    return (min);
}

long int Span::longestSpan() const {
    std::vector<int> copy;

    if (this->_v.size() <= 1)
        throw NoSpanException();
    copy = this->_v;
    std::sort(copy.begin(), copy.end());
    return (static_cast<long int>(copy[copy.size() - 1]) - static_cast<long int>(copy[0]));
}
