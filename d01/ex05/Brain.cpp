// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:19:02 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:19:03 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

std::string Brain::identify() const
{
	std::stringstream ss;
	ss << this;
	return (ss.str());
}