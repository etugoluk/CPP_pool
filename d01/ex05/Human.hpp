#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	Brain const _brain;
public:
	Brain const	&getBrain() const;
	std::string identify() const;
};

#endif