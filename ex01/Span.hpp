/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:12:11 by kaisuzuk          #+#    #+#             */
/*   Updated: 2026/02/25 14:57:56 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include "FullException.hpp"
#include "NoSpanException.hpp"

class Span {
    private:
        unsigned int _N;
        std::vector<int> _v;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &);
        Span &operator=(const Span &);
        ~Span();
        void addNumber(int);
        int shortestSpan() const;
        int longestSpan() const;
        template <typename It> void addNumber(It first, It last);
};



#endif