/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NoSpanException.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:28:41 by kaisuzuk          #+#    #+#             */
/*   Updated: 2026/02/25 13:30:47 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOSPANEXCEPTION_HPP
# define NOSPANEXCEPTION_HPP

#include <exception>

class NoSpanException: public std::exception {
    private:
    public:
        const char *what() const throw();
};

#endif