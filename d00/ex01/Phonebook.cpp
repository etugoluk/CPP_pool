#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "Phonebook is created. Welcome!" << std::endl;
	count = 0;
}

void	Phonebook::add()
{
	if (count == 8)
		std::cout << "Phonebook is fill" << std::endl;
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

	for (int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << i << "|";
		this->contacts[i].print_short_contact();
	}
	std::cout << "Enter index of contact: ";
	std::getline(std::cin, s);
	ss << s;
	ss >> n;
	if (n < 0 || n >= count || (n == 0 && s.compare("0")))
	{
		std::cout << "Contact with this index doesn't exist" << std::endl;
		return ;
	}
	else
		contacts[n].print_full_contact();
}
