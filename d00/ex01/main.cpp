
#include "Phonebook.hpp"

int main()
{
	Phonebook	p;
	std::string	s;

	while (1)
	{
		std::cout << "Write your command (ADD | SEARCH | EXIT): ";
		std::cin >> s;
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
