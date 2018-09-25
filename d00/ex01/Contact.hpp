#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

class Contact
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
public:
		void	print_full_contact();
		void	print_short_contact();
		void	set_contact();
};

#endif