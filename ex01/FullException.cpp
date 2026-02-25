/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FullException.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:25:34 by kaisuzuk          #+#    #+#             */
/*   Updated: 2026/02/25 13:28:09 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FullException.hpp"

const char *FullException::what() const throw() {
    return ("Error: Span is full.");
}