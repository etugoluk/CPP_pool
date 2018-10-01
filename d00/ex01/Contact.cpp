
#include "Contact.hpp"

void	Contact::set_contact()
{
	std::cout << "First name: ";
	std::getline(std::cin, firstname);
	std::cout << "Last name: ";
	std::getline(std::cin, lastname);
	std::cout << "Nick name: ";
	std::getline(std::cin, nickname);
	std::cout << "Login: ";
	std::getline(std::cin, login);
	std::cout << "Postal address: ";
	std::getline(std::cin, postal_address);
	std::cout << "Email address: ";
	std::getline(std::cin, email_address);
	std::cout << "Phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "birthday_date: ";
	std::getline(std::cin, birthday_date);
	std::cout << "favorite_meal: ";
	std::getline(std::cin, favorite_meal);
	std::cout << "underwear_color: ";
	std::getline(std::cin, underwear_color);
	std::cout << "darkest_secret: ";
	std::getline(std::cin, darkest_secret);
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
