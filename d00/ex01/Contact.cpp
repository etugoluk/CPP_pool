// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: etugoluk <etugoluk@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 17:27:26 by etugoluk          #+#    #+#             //
//   Updated: 2018/10/02 17:27:27 by etugoluk         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contact.hpp"

void	Contact::set_contact()
{
	std::cout << "First name: ";
	if (!std::getline(std::cin, firstname))
		exit(0);
	std::cout << "Last name: ";
	if (!std::getline(std::cin, lastname))
		exit(0);
	std::cout << "Nick name: ";
	if (!std::getline(std::cin, nickname))
		exit(0);
	std::cout << "Login: ";
	if (!std::getline(std::cin, login))
		exit(0);
	std::cout << "Postal address: ";
	if (!std::getline(std::cin, postal_address))
		exit(0);
	std::cout << "Email address: ";
	if (!std::getline(std::cin, email_address))
		exit(0);
	std::cout << "Phone number: ";
	if (!std::getline(std::cin, phone_number))
		exit(0);
	std::cout << "birthday_date: ";
	if (!std::getline(std::cin, birthday_date))
		exit(0);
	std::cout << "favorite_meal: ";
	if (!std::getline(std::cin, favorite_meal))
		exit(0);
	std::cout << "underwear_color: ";
	if (!std::getline(std::cin, underwear_color))
		exit(0);
	std::cout << "darkest_secret: ";
	if (!std::getline(std::cin, darkest_secret))
		exit(0);
}

void	Contact::print_full_contact()
{
	std::cout << "Firstname: " << firstname << std::endl;
	std::cout << "Lastname: " << lastname << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal address: " << postal_address << std::endl;
	std::cout << "Email address: " << email_address << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Birthday date: " << birthday_date << std::endl;
	std::cout << "Favorite meal: " << favorite_meal << std::endl;
	std::cout << "Underwear color: " << underwear_color << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

void	Contact::print_short_contact()
{
	if (this->firstname.length() > 10)
		std::cout << this->firstname.substr(0, 9) + ".|";
	else
		std::cout << std::setw(10) << this->firstname << "|";
	if (this->lastname.length() > 10)
		std::cout << this->lastname.substr(0, 9) + ".|";
	else
		std::cout << std::setw(10) << this->lastname << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) + ".|" << std::endl;
	else
		std::cout << std::setw(10) << this->nickname << "|" << std::endl;
}
