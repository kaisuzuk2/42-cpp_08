/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:58:25 by kaisuzuk          #+#    #+#             */
/*   Updated: 2026/02/25 15:00:33 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template <typename It>
void Span::addNumber(It first, It last) {
    if (this->_v.size() + std::distance(first, last) > this->_N)
        throw FullException();
    this->_v.insert(this->_v.end(), first, last);
}