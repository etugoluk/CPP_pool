#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
	std::string name;
	int			age;

public:
	Pony();
	Pony(std::string name, int age);
	~Pony();
};

#endif