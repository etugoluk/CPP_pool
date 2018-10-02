// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 17:27:42 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/02 17:27:43 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Phonebook.hpp"

int main()
{
	Phonebook	p;
	std::string	s;

	while (1)
	{
		std::cout << "Write your command (ADD | SEARCH | EXIT): ";
		if (!std::getline(std::cin, s))
			return (0);
		if (!s.compare("ADD"))
			p.add();
		else if (!s.compare("SEARCH"))
			p.search();
		else if (!s.compare("EXIT"))
		{
			std::cout << "Bye!" << std::endl;
			break;
		}
		else
			continue;
	}
	return (0);
}
