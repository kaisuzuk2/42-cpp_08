/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValueNotFoundException.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:30:51 by kaisuzuk          #+#    #+#             */
/*   Updated: 2026/02/25 10:33:41 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALUENOTFOUNDEXCEPTION
# define VALUENOTFOUNDEXCEPTION

#include <iostream>
#include "exception"

class ValueNotFoundException: public std::exception {
    private:
    public:
        const char *what() const throw();
};

#endif