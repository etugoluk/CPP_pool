// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mutantstack.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 18:29:42 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/11 18:29:43 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack<T>() {}
    MutantStack<T>(MutantStack<T> const& m): std::stack<T>(m) {}
    ~MutantStack<T>() {}

    typedef typename std::stack<T>::container_type::iterator iterator;
    using std::stack<T>::operator=;

    iterator    begin()
    {
        return std::stack<T>::c.begin();
    }
    iterator    end()
    {
        return std::stack<T>::c.end();
    }
};

#endif