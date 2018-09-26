#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human
{
	Brain _brain;
public:
	Human(){}
	Brain		getBrain();
	std::string identify();
};

#endif