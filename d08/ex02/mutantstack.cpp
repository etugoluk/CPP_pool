// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mutantstack.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 18:29:37 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/11 18:29:38 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "mutantstack.hpp"

MutantStack::MutantStack() {}

MutantStack::MutantStack(MutantStack const & m) {
	*this = m;
}

MutantStack::~MutantStack() {}

MutantStack & MutantStack::operator=(MutantStack const & m) {
	return *this;
}