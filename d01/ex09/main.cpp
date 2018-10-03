// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:33:04 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:33:05 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"

int main()
{
	Logger l;
	l.setFilename("out");
	l.log("console", "write to console");
	l.log("file", "write to file");
	return (0);
}