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

	if (count == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	for (int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		this->contacts[i].print_short_contact();
	}
	std::cout << "Enter index of contact: ";
	std::cin >> s;
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
