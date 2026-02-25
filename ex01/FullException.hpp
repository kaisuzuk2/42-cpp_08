/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FullException.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:25:37 by kaisuzuk          #+#    #+#             */
/*   Updated: 2026/02/25 13:27:10 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FULLEXCEPTION_HPP
# define FULLEXCEPTION_HPP

#include <exception>

class FullException: public std::exception {
    private:
    public:
        const char *what() const throw();
};

#endif