#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	Contact	contacts[8];
	int		count;
public:
	Phonebook();
	void add();	
	void search();
};

#endif