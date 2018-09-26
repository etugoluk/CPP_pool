#include "Brain.hpp"

std::string Brain::identify()
{
	// const void *address = static_cast<const void*>(this);
	std::stringstream ss;
	ss << this;  
	// std::string name = ss.str(); 
	return (ss.str());
}