/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 09:40:26 by kaisuzuk          #+#    #+#             */
/*   Updated: 2026/02/25 10:37:13 by kaisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &container, int val) {
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), val);
    if (it == container.end())
        throw ValueNotFoundException();
    return (it);
}