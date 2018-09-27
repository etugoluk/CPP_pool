#include "Brain.hpp"

std::string Brain::identify() const
{
	std::stringstream ss;
	ss << this;
	return (ss.str());
}