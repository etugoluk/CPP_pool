// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Phonebook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 17:27:56 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/02 17:27:57 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "Phonebook is created. Welcome!" << std::endl;
	count = 0;
}

void	Phonebook::add()
{
	if (count == 8)
		std::cout << "Phonebook is full" << std::endl;
	else
	{
		this->contacts[count].set_contact();
		this->count++;
	}
}

void	Phonebook::search()
{
	int n = 0;
	std::string s;
	std::stringstream ss;

	if (count == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		this->contacts[i].print_short_contact();
	}
	std::cout << "Enter index of contact: ";
	if (!std::getline(std::cin, s))
		exit(0);
	ss << s;
	ss >> n;
	if (n < 1 || n > count)
	{
		std::cout << "Contact with this index doesn't exist" << std::endl;
		return ;
	}
	else
		contacts[n - 1].print_full_contact();
}
