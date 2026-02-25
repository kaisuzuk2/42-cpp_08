/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValueNotFoundException.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:32:34 by kaisuzuk          #+#    #+#             */
/*   Updated: 2026/02/25 10:49:42 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ValueNotFoundException.hpp"

const char *ValueNotFoundException::what() const throw() {
    return ("Error: Element not found.");
}