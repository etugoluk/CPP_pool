// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:02:52 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:02:53 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
	std::string name;
	int			age;

public:
	Pony();
	Pony(std::string name, int age);
	~Pony();
};

#endif