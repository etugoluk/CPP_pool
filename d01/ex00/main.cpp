// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 15:02:38 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/03 15:02:39 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

void ponyOnTheHeap()
{
	std::cout << "Pony on the heap" << std::endl;
	Pony *p_h = new Pony("heap", 12);
	delete p_h;
}

void ponyOnTheStack()
{
	std::cout << "Pony on the stack" << std::endl;
	Pony p_s = Pony("stack", 15);
}

int main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
