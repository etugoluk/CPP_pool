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
	typedef    std::stack<T> data;
public:
	MutantStack();
	MutantStack(MutantStack const & m);
	~MutantStack();

	MutantStack & operator=(MutantStack const & m);

	typedef typename std::stack<T>::container_type::iterator iterator;

	using std::stack<T>::operator=;

    iterator	begin()
    {
        return std::stack<T>::c.begin();
    }
    
    iterator	end()
    {
        return std::stack<T>::c.end();
    }
};

#endif