// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 13:57:26 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/11 13:57:27 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>

int easyfind(T container, int i) {
	typename T::iterator it;
	if ((it = std::find(container.begin(), container.end(), i)) != container.end())
		return std::distance(container.begin(), it);
	else
		throw std::exception();
}

#endif